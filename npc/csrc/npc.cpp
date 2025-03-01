#include <cpu.h>
#include <getopt.h>

#define MAX_SIM_TIME 100

extern int sim_time;
extern Vnpc *dut;
extern CPU_state state;
extern char *img_file;

uint32_t pmem_read(uint32_t addr);
long load_img();

extern void get_reg(int addr, int* reg_data);

void ebreak(){
  stop();
}

void parse_args(int argc, char **argv) {
  const struct option table[] = {
    {"image", required_argument, NULL, 'i'},
    {NULL, 0, NULL, 0}
  };
  int o;
  while((o = getopt_long(argc, argv, "-i:", table, NULL)) != -1) {
    switch(o) {
      case 'i':
        img_file = optarg;
        break;
      default:
        break;
    }
  }
}

int main(int argc, char **argv) {
  
  cpu_init("npc.vcd");

  parse_args(argc, argv);

  load_img();

  std::cout<<"NPC simulation starts"<<std::endl;

  while(1) {  
    dut->inst = pmem_read(dut->pc);
    state = RUN;
    single_cycle();

    if(state == HALT){
      int data;
      svSetScope(svGetScopeFromName("TOP.npc.u_RegisterFile"));
      get_reg(10, &data);
      if(data == 0){
        printf(ANSI_COLOR_GREEN "HIT GOOD TRAP\n" ANSI_COLOR_RESET);
      }else{
        printf(ANSI_COLOR_RED "HIT BAD TRAP\n" ANSI_COLOR_RESET);
      }
      break;
    }
  }

  std::cout << "simulation ended" << std::endl;


  cpu_deinit();
  return 0;
}
