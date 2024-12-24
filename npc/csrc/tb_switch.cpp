#include<stdlib.h> 
#include<iostream>
#include<verilated.h> 
#include<verilated_vcd_c.h>
#include<Vswitch.h>
#include<Vswitch___024root.h>

#define MAX_SIM_TIME 20

int sim_time = 0;
int main(int argc,char **argv){
	Vswitch *dut = new Vswitch;
	while (sim_time<MAX_SIM_TIME) {
		int a = rand() & 1;
		int b = rand() & 1;
		dut->a = a;
		dut->b = b;
		dut->eval();
		printf("a = %d, b = %d, f = %d\n", a, b, dut->f);
		assert(dut->f == (a ^ b));
		sim_time++;
	}
	delete dut;
	return 0;
}
