#include <cpu.h>

int sim_time;
Vnpc *dut;
CPU_state state;
VerilatedVcdC *m_trace;


void cpu_init(const char* Vcd_file){
  dut = new Vnpc;
  m_trace = new VerilatedVcdC;
  sim_time = 0;
  state = RUN;

  Verilated::traceEverOn(true);
  dut->trace(m_trace, 10);
  m_trace->open(Vcd_file);
  reset(10);
}

void cpu_deinit() {
  m_trace->close();
  delete m_trace;
  delete dut;
}

void single_cycle() {
  dut->clk = 1; dut->eval(); m_trace->dump(sim_time); sim_time++;
  dut->clk = 0; dut->eval(); m_trace->dump(sim_time); sim_time++;
}

void stop() {
  state = HALT;
}

void reset(int n) {
  dut->rst = 1;
  while (n > 0) {
    single_cycle();
    n--;
  }
  dut->rst = 0;
}
