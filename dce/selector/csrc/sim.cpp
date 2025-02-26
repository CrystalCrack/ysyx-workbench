#include<stdio.h>
#include<iostream>
#include<random>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vmux4_1.h"
#include"Vmux4_1___024root.h"
#define MAX_SIM_TIME 100
int sim_time = 0;

int main(int argc, char** argv) {
    Verilated::traceEverOn(true);
    Vmux4_1* top = new Vmux4_1;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 2);
    tfp->open("waveforms.vcd");
    while(!Verilated::gotFinish() && sim_time < MAX_SIM_TIME) {
        top->in0 = rand() % 4;
        top->in1 = rand() % 4;
        top->in2 = rand() % 4;
        top->in3 = rand() % 4;
        top->ctrl = rand() % 4;
        top->eval();
        tfp->dump(sim_time);
        uint8_t data[4] = {top->in0, top->in1, top->in2, top->in3};
        assert(top->out == data[top->ctrl]);
        std::cout<<"out = "<<(int)top->out<<", selected = "<<(int)data[top->ctrl]<<std::endl;
        sim_time++;
    }
    tfp->close();
    delete top;
    delete tfp;
    return 0;
}