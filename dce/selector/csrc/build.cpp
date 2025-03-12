#include<stdio.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vmux4_1.h"
#include"Vmux4_1___024root.h"
#include<nvboard.h>

void nvboard_bind_all_pins(Vmux4_1* top);

int main(int argc, char** argv) {
    Vmux4_1* top = new Vmux4_1;
    nvboard_bind_all_pins(top);
    nvboard_init();
    while(1){
        top->eval();
        nvboard_update();
    }
    delete top;
    return 0;
}