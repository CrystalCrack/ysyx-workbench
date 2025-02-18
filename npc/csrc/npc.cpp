#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnpc.h"
#include "Vnpc___024root.h"
#include "Vnpc__Dpi.h"

#define MAX_SIM_TIME 100
#define MSIZE 0xFFFF
#define MBIAS 0x80000000

uint8_t pmem[MSIZE] = {
  // 0x00500093 (addi x1, x0, 5)
  0x93, 0x00, 0x50, 0x00,

  // 0xffd08113 (addi x2, x1, -3)
  0x13, 0x81, 0xd0, 0xff,

  // 0xff600193 (addi x3, x0, -10)
  0x93, 0x01, 0x60, 0xff,

  // 0x00f18213 (addi x4, x3, 15)
  0x13, 0x82, 0xf1, 0x00,

  // 0x00000293 (addi x5, x0, 0)
  0x93, 0x02, 0x00, 0x00,

  // 0x06428313 (addi x6, x5, 100)
  0x13, 0x83, 0x42, 0x06,

  // 0x7ff00393 (addi x7, x0, 2047)
  0x93, 0x03, 0xf0, 0x7f,

  // 0x80000413 (addi x8, x0, -2048)
  0x13, 0x04, 0x00, 0x80,

  // 0x00148493 (addi x9, x9, 1)
  0x93, 0x84, 0x14, 0x00,

  //ebreak
  0x73, 0x00, 0x10, 0x00
};

int halt = 0;

void ebreak(){
  halt = 1;
}

uint32_t pmem_read(uint32_t addr){
  return *(uint32_t*)(pmem + addr - MBIAS);
}

int sim_time = 0;
VerilatedVcdC *m_trace = new VerilatedVcdC;

void single_cycle(Vnpc *top) {
  top->clk = 1; top->eval();m_trace->dump(sim_time);sim_time++;
  top->clk = 0; top->eval();m_trace->dump(sim_time);sim_time++;
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
  while(!halt) {
    dut->inst = pmem_read(dut->pc);
    single_cycle(dut);
  }
  std::cout << "simulation ended" << std::endl;
  m_trace->close();
  delete m_trace;
  delete dut;
  return 0;
}
