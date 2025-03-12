#include <iostream>
#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"
#include "Vtop___024root.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtop *top = new Vtop;
    VerilatedVcdC *tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    top->data = 0x10;
    top->en = 0;
    top->eval();
    tfp->dump(1);

    top->en = 1;
    top->eval();
    tfp->dump(2);

    top->data = 0x0;
    top->eval();
    tfp->dump(3);

    top->data = 0x40;
    top->eval();
    tfp->dump(4);

    top->data = 0x02;
    top->eval();
    tfp->dump(5);

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}