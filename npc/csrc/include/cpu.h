#ifndef CPU_H
#define CPU_H

#include <common.h>

enum CPU_state {
    RUN,
    HALT
};

void cpu_init(const char* Vcd_file);
void cpu_deinit();
void single_cycle();
void stop();
void reset(int n);

#endif