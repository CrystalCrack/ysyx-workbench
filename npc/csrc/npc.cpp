#include <cpu.h>

#define MAX_SIM_TIME 100

extern int sim_time;
extern Vnpc *dut;
extern CPU_state state;

uint32_t pmem_read(uint32_t addr);


void ebreak(){
  stop();
}

int main(int argc, char **argv) {
  cpu_init("npc.vcd");
  std::cout<<"NPC simulation starts"<<std::endl;
  while(state == RUN && sim_time < MAX_SIM_TIME) {  
    dut->inst = pmem_read(dut->pc);
    single_cycle();
  }
  std::cout << "simulation ended" << std::endl;
  cpu_deinit();
  return 0;
}
