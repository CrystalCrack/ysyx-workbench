#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vlight.h"
#include "Vlight___024root.h"
#include <nvboard.h>

#define MAX_SIM_TIME 300000

int sim_time = 0;
VerilatedVcdC *m_trace = new VerilatedVcdC;
void nvboard_bind_all_pins(Vlight* top);

void single_cycle(Vlight *top) {
  top->clk = 0; top->eval();m_trace->dump(sim_time);sim_time++;nvboard_update();
  top->clk = 1; top->eval();m_trace->dump(sim_time);sim_time++;nvboard_update();
}

void reset(Vlight *top, int n) {
  top->rst_n = 0;
  while (n > 0) {
    single_cycle(top);
    n--;
  }
  top->rst_n = 1;
}

int main() {
  Vlight *dut = new Vlight;
  // Verilated::traceEverOn(true);
  // dut->trace(m_trace, 5);
  // m_trace->open("waveform.vcd");
  nvboard_bind_all_pins(dut);
  nvboard_init();
  reset(dut,10);
  while(1) {
    // if(sim_time<10){
    //   reset(dut,10);
    // }
    // else {
    //   single_cycle(dut);
    // }
    single_cycle(dut);
  }

  delete dut;
  return 0;
}
