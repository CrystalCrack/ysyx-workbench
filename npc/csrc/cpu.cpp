#include <cpu.h>

Cpu::Cpu() : sim_time(0), halt(0) {
  dut = new Vnpc;
  m_trace = new VerilatedVcdC;
  sim_time = 0;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 10);
  m_trace->open("npc.vcd");
  reset(10);
}

Cpu::~Cpu() {
  m_trace->close();
  delete m_trace;
  delete dut;
}

void Cpu::single_cycle() {
  dut->clk = 1; dut->eval(); m_trace->dump(sim_time); sim_time++;
  dut->clk = 0; dut->eval(); m_trace->dump(sim_time); sim_time++;
}

void Cpu::stop() {
  halt = 1;
}

CPU_state Cpu::state(){
  if (halt) return HALT;
  else return RUN;
}

void Cpu::reset(int n) {
  dut->rst = 1;
  while (n > 0) {
    single_cycle();
    n--;
  }
  dut->rst = 0;
}
