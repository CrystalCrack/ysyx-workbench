#include <cpu.h>
#include <memory.h>
#include <sdb.h>

Vdut *dut;
CPU_state state;
int halt_ret;
uint32_t halt_pc;
uint64_t g_nr_guest_inst = 0;
uint64_t g_nr_cycles = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
char logbuf[128];
extern int cur_wave_idx;

/* trace */
void write_iringbuf(vaddr_t pc, uint32_t inst);
void ftrace(vaddr_t pc, uint32_t inst);
void EvalAndWaveTrace(Vdut *dut );
void DeinitWaveTrace();
/* difftest */
void difftest_step(vaddr_t pc);
void difftest_skip_ref();
/* timer */
uint64_t get_time_internal();

void cpu_init(){
  dut = new Vdut;
  state = RUNNING;
  Verilated::traceEverOn(true);
  reset(10);
}

void cpu_deinit() {
  DeinitWaveTrace();
  delete dut;
}

void single_cycle() {
  dut->clock = 0; EvalAndWaveTrace(dut);
  dut->clock = 1; EvalAndWaveTrace(dut);
}

void stop(int code, uint32_t pc) {
  difftest_skip_ref();
  state = END;
  halt_pc = pc;
  halt_ret = code;
}

void Cget_reg(int addr, int* ret_code){
  const svScope scope = svGetScopeFromName("TOP.soc.asic.cpu.cpu.u_RegisterFile");
  assert(scope);  
  svSetScope(scope);
  get_reg(addr, ret_code);
}

void Cget_CSR(int* mtvec_rdata, int* mcause_rdata, int* mepc_rdata, int* mstatus_rdata){
  const svScope scope = svGetScopeFromName("TOP.soc.asic.cpu.cpu");
  assert(scope);  
  svSetScope(scope);
  get_CSR(mtvec_rdata, mcause_rdata, mepc_rdata, mstatus_rdata);
}

void Cget_pc_inst(uint32_t* pc, uint32_t* inst){
  const svScope scope = svGetScopeFromName("TOP.soc.asic.cpu.cpu");
  assert(scope);  
  svSetScope(scope);
  int pc_temp, inst_temp;
  int* pc_ptr = pc==NULL ? &pc_temp : (int*)pc;
  int* inst_ptr = inst==NULL ? &inst_temp : (int*)inst;
  get_pc_inst(pc_ptr, inst_ptr);
  // printf("get pc: " FMT_WORD "\n", *pc_ptr);
}

int Cis_inst_done(){
  int done;
  const svScope scope = svGetScopeFromName("TOP.soc.asic.cpu.cpu");
  assert(scope);  
  svSetScope(scope);
  is_inst_done(&done);
  return done;
}

extern "C" void LStrigger(int32_t addr) {
  if (addr >= 0x10000000 && addr < 0x10000fff){//uart
    difftest_skip_ref();
  }
}

static void exec_once() {

  /* run a cycle */
  do{
    single_cycle();
    g_nr_cycles++;
  }while(!Cis_inst_done());

  /* itrace */
  uint32_t pc, instru;
  Cget_pc_inst(&pc, &instru);
  /* ftrace */
  ftrace(pc, instru);

  // write iringbuf
  write_iringbuf(pc, instru);

#ifdef CONFIG_ITRACE
  char *p = logbuf;
  p += snprintf(p, sizeof(logbuf), FMT_WORD ":", pc);
  int ilen = 4;
  int i;
  uint8_t *inst = (uint8_t *)&instru;

  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 4;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, logbuf + sizeof(logbuf) - p,
      pc, (uint8_t *)&instru, ilen);
#endif
}

static void trace_and_difftest() {
  #ifdef CONFIG_ITRACE
    if (g_print_step) {
      printf("%s\n", logbuf);
    }
  #endif

  #ifdef CONFIG_DIFFTEST
    CPU_reg _this = get_cpu_state();
    difftest_step(_this.pc);
  #endif
}

static void execute(uint64_t n) {
  for (;n > 0; n --) {
    exec_once();
    g_nr_guest_inst++;
    trace_and_difftest();
    // check watchpoint
    if(state == RUNNING && check_wp()) { state = STOP; }
    if (state != RUNNING) break;
  }
}

void reset(int n) {
  dut->reset = 1;
  while (n > 0) {
    single_cycle();
    n--;
  }
  dut->reset = 0;
}
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void reg_display(){
  printf("\n======================== NPC Register Display ========================\n");
  printf("%-4s %-10s  %-4s %-10s  %-4s %-10s  %-4s %-10s\n", 
         "Reg", "Value", "Reg", "Value", "Reg", "Value", "Reg", "Value");
  printf("---- ----------  ---- ----------  ---- ----------  ---- ----------\n");
  
  int reg_data;
  for(int i = 0; i < 32; i += 4) {
    for(int j = 0; j < 4 && (i + j) < 32; j++) {
      int idx = i + j;
      Cget_reg(idx, &reg_data);
      printf("%-4s " FMT_WORD, regs[idx], reg_data);
      if(j < 3 && (i + j + 1) < 32) printf("  ");
    }
    printf("\n");
  }
  
  // Display PC separately
  uint32_t pc;
  int32_t mtvec, mcause, mepc, mstatus;
  Cget_pc_inst(&pc, NULL);
  Cget_CSR(&mtvec, &mcause, &mepc, &mstatus);
  printf("\nPC:  " FMT_WORD "\n", pc);
  printf("mtvec: " FMT_WORD "\n", mtvec);
  printf("mcause: " FMT_WORD "\n", mcause);
  printf("mepc: " FMT_WORD "\n", mepc);
  printf("mstatus: " FMT_WORD "\n", mstatus);
  printf("======================================================================\n\n");
}



uint32_t reg_str2val(const char *s) {
  int i;
  if(strcmp(s,"pc")==0){
    uint32_t pc;
    Cget_pc_inst(&pc, NULL);
    return pc;
  }
  for(i=0;i<ARRLEN(regs);i++){
    if(strcmp(s,regs[i])==0){
      int reg_data;
      Cget_reg(i, &reg_data);
      return reg_data;
    }
  }
  return 0;
}

CPU_reg get_cpu_state(){
  CPU_reg _this;
  for(int i = 0; i < 32; i++){
    Cget_reg(i, (int*)&_this.gpr[i]);
  }
  Cget_pc_inst(&_this.pc, NULL);
  Cget_CSR((int*)&_this.mtvec, (int*)&_this.mcause, (int*)&_this.mepc, (int*)&_this.mstatus);
  return _this;
}

static void statistic() {
  Log("host time spent = %lu us", g_timer);
  Log("total guest instructions = %lu", g_nr_guest_inst);
  Log("total cycles = %lu", g_nr_cycles);
  Log("currrent wave file index: %d", cur_wave_idx);
  if (g_timer > 0) Log("simulation frequency = %lu inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void cpu_exec(uint64_t n){
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (state) {
    case END: case ABORT: case QUIT:
      printf("Program execution has ended. To restart the program, exit and run again.\n");
      return;
    default: state = RUNNING;
  }

  uint64_t timer_start = get_time_internal();

  execute(n);

  uint64_t timer_end = get_time_internal();
  g_timer += timer_end - timer_start;

  switch (state) {
    case RUNNING: state = STOP; break;
    case ABORT: case END: 
    Log("NPC: %s " ANSI_COLOR_BLUE "at pc = " FMT_WORD,
          (state == ABORT ? ANSI_FMT("ABORT", ANSI_COLOR_RED) :
          (halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_COLOR_GREEN) :
          ANSI_FMT("HIT BAD TRAP", ANSI_COLOR_RED))),
          halt_pc);
      // fall through
    case QUIT: 
      statistic();
      break;
  }
}