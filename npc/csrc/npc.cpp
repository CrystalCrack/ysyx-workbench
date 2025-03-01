#include <cpu.h>

#define MAX_SIM_TIME 100

uint32_t pmem_read(uint32_t addr);

Cpu cpu;

void ebreak(){
  cpu.stop();
}

int main(int argc, char **argv) {
  std::cout<<"NPC simulation starts"<<std::endl;
  while(cpu.state() == RUN && cpu.sim_time < MAX_SIM_TIME) {  
    cpu.dut->inst = pmem_read(cpu.dut->pc);
    cpu.single_cycle();
  }
  std::cout << "simulation ended" << std::endl;
  return 0;
}
