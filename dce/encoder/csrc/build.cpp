#include<iostream>
#include<stdio.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vtop.h"
#include"Vtop___024root.h"
#include<nvboard.h>

void nvboard_bind_all_pins(Vtop* top);

int main(int argc, char ** argv){
    Vtop * top = new Vtop;
    nvboard_bind_all_pins(top);
    nvboard_init();
    while(1){
        top->eval();
        nvboard_update();
    }
    delete top;
    return 0;
}