#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"VLFSR.h"
#include"VLFSR___024root.h"

int simtime = 0;

int main(int argc, char** argv) {
    VLFSR* top = new VLFSR;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("LFSR.vcd");
    top->clk = 0;
    top->rst = 1;
    top->eval();
    tfp->dump(simtime);
    simtime++;
    top->rst = 1;
    top->clk = 1;
    top->eval();
    tfp->dump(simtime);
    simtime++;
    top->rst = 0;
    for(int i = 0; i < 300; i++) {
        top->clk = 0;
        top->eval();
        tfp->dump(simtime);
        simtime++;
        top->clk = 1;
        top->eval();
        tfp->dump(simtime);
        simtime++;
    }
    tfp->close();
    delete top;
    exit(0);
}