#include <cpu.h>
#include <memory.h>
#include <sdb.h>

#define MAX_INST_TO_PRINT 10
#define MAX_TRACE 100000
int sim_time;
Vnpc *dut;
CPU_state state;
VerilatedVcdC *m_trace;
int halt_ret;
uint32_t halt_pc;
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
char logbuf[128];

/* trace */
void write_iringbuf(vaddr_t pc, uint32_t inst);
void ftrace(vaddr_t pc, uint32_t inst);
/* difftest */
void difftest_step(vaddr_t pc);
/* timer */
uint64_t get_time_internal();

void cpu_init(const char* Vcd_file){
  dut = new Vnpc;
  m_trace = new VerilatedVcdC;
  sim_time = 0;
  state = RUNNING;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 10);
  m_trace->open(Vcd_file);
  reset(5);

}

void cpu_deinit() {
  m_trace->close();
  delete m_trace;
  delete dut;
}

void single_cycle() {
  dut->clk = 0; dut->eval(); if(sim_time<MAX_TRACE) m_trace->dump(sim_time); sim_time++;
  dut->clk = 1; dut->eval(); if(sim_time<MAX_TRACE) m_trace->dump(sim_time); sim_time++;
}

void stop(int code, uint32_t pc) {
  state = END;
  halt_pc = pc;
  halt_ret = code;
}

void Cget_reg(int addr, int* ret_code){
  svSetScope(svGetScopeFromName("TOP.npc.u_RegisterFile"));
  get_reg(addr, ret_code);
}

void Cget_CSR(int* mtvec_rdata, int* mcause_rdata, int* mepc_rdata, int* mstatus_rdata){
  svSetScope(svGetScopeFromName("TOP.npc"));
  get_CSR(mtvec_rdata, mcause_rdata, mepc_rdata, mstatus_rdata);
}

void Cget_pc_inst(uint32_t* pc, uint32_t* inst){
  svSetScope(svGetScopeFromName("TOP.npc"));
  int pc_temp, inst_temp;
  int* pc_ptr = pc==NULL ? &pc_temp : (int*)pc;
  int* inst_ptr = inst==NULL ? &inst_temp : (int*)inst;
  get_pc_inst(pc_ptr, inst_ptr);
}

int Cis_inst_done(){
  int done;
  svSetScope(svGetScopeFromName("TOP.npc"));
  is_inst_done(&done);
  return done;
}

static void exec_once() {
  /* itrace */
  uint32_t pc, instru;
  Cget_pc_inst(&pc, NULL);
  instru = paddr_read(pc, 4);
  
  /* run a cycle */
  do{
    single_cycle();
  }while(!Cis_inst_done());



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
  dut->rst = 1;
  while (n > 0) {
    single_cycle();
    n--;
  }
  dut->rst = 0;
}

void reg_display(){
  int reg_data;
  for(int i = 0; i < 32; i++){
    Cget_reg(i, &reg_data);
    printf("x%d: " FMT_WORD "\n", i, reg_data);
  }
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

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

    case ABORT:
      display_error_msg();
    case END: 
    Log("NPC: %s " ANSI_COLOR_BLUE "at pc = " FMT_WORD,
          (state == ABORT ? ANSI_FMT("ABORT", ANSI_COLOR_RED) :
          (halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_COLOR_GREEN) :
          ANSI_FMT("HIT BAD TRAP", ANSI_COLOR_RED))),
          halt_pc);
      // fall through
    case QUIT: 
      statistic();
      printf("Execution terminated\n");
      break;
  }
}