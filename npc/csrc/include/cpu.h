#include <common.h>

enum CPU_state {
    RUN,
    HALT
};

class Cpu {
public:
  int sim_time;
  Vnpc *dut;

  Cpu();
  ~Cpu();
  void single_cycle();
  void stop();
  void reset(int n);
  CPU_state state();

private:
  int halt;
  VerilatedVcdC *m_trace;
  
};