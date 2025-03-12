#include<stdio.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include"Vtop.h"
#include"Vtop___024root.h"

int signed_adder(int i, int j, int Cin, int mode) {
    int result;

    if (mode == 0) {
        // Simulate 4-bit signed addition with carry-in
        result = (i + j + Cin) & 0xF;
        if (result & 0x8) result |= 0xFFFFFFF0; // Sign extend if negative
    } else if (mode == 1) {
        // Simulate 4-bit signed subtraction
        result = (i - j) & 0xF;
        if (result & 0x8) result |= 0xFFFFFFF0; // Sign extend if negative
    } else {
        return -1;
    }

    return result;
}

int main(int argc, char **argv) {
    Vtop *top = new Vtop;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    int Cin;
    int sim_time = 0;
    int result;
    for(int i = -8; i <= 7; i++){
        for(int j = -8; j <= 7; j++){
            top->A = i;
            top->B = j;
            top->mode = 0x0;
            Cin = rand() % 2;
            top->Cin = Cin;
            top->eval();
            tfp->dump(sim_time);
            sim_time++;

            result = top->result;
            int ideal_result = signed_adder(i,j,Cin,0);
            if(result&0x8) result |= 0xFFFFFFF0;
            printf("%d+%d+%d=%d\t\t%d\n",i,j,Cin,result,ideal_result);
            assert(result == ideal_result);
        }
    }

    for(int i = -8; i <= 7; i++){
        for(int j = -8; j <= 7; j++){
            top->A = i;
            top->B = j;
            top->mode = 0x1;
            top->eval();
            tfp->dump(sim_time);
            sim_time++;

            result = top->result;
            int ideal_result = signed_adder(i,j,Cin,1);
            printf("%d\n",result);
            if(result&0x8) result |= 0xFFFFFFF0;
            printf("%d-%d=%d\t\t%d\n",i,j,result,ideal_result);
            assert(result == ideal_result);
        }
    }

    for(int i = -8; i <= 7; i++){
        for(int j = -8; j <= 7; j++){
            top->A = i;
            top->B = j;
            top->mode = 0x6;
            top->eval();
            tfp->dump(sim_time);
            sim_time++;

            result = top->result;
            assert(result == (i<j));
        }
    }

    for(int i = -8; i <= 7; i++){
        for(int j = -8; j <= 7; j++){
            top->A = i;
            top->B = j;
            top->mode = 0x7;
            top->eval();
            tfp->dump(sim_time);
            sim_time++;

            result = top->result;
            assert(result == (i==j));
        }
    }

    delete top;
    tfp->close();
    delete tfp;
    return 0;
}