#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vnpc.h"
#include "Vnpc___024root.h"
#include "Vnpc__Dpi.h"

int halt = 0;
Vnpc *top;

void ebreak(){
  halt = 1;
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

void init_cpu(){
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
}