#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnpc.h"
#include "Vnpc___024root.h"

#define MAX_SIM_TIME 10
#define MSIZE 0xFFFF
#define MBIAS 0x80000000

uint8_t pmem[MSIZE] = {};
uint32_t pmem_read(uint32_t addr){
  std::cout<<addr<<std::endl;
  return *(uint32_t*)(pmem + addr - MBIAS);
}

int sim_time = 0;
VerilatedVcdC *m_trace = new VerilatedVcdC;

void single_cycle(Vnpc *top) {
  top->clk = 0; top->eval();m_trace->dump(sim_time);sim_time++;
  top->clk = 1; top->eval();m_trace->dump(sim_time);sim_time++;
}

void reset(Vnpc *top, int n) {
  top->rst = 1;
  while (n > 0) {
    single_cycle(top);
    n--;
  }
  top->rst = 0;
}

int main() {
  Vnpc *dut = new Vnpc;
  Verilated::traceEverOn(true);
  dut->trace(m_trace, 10);
  m_trace->open("npc.vcd");
  reset(dut,10);
  while(sim_time < MAX_SIM_TIME) {
    single_cycle(dut);
    top->inst = pmem_read(top->pc);
  }

  delete dut;
  return 0;
}
