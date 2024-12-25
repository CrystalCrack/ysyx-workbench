#include<stdlib.h> 
#include<iostream>
#include<verilated.h> 
#include<verilated_vcd_c.h> //for export vcd file
#include<Vswitch.h>
#include<Vswitch___024root.h>

#define MAX_SIM_TIME 20

int sim_time = 0;
int main(int argc,char **argv){
	Vswitch *dut = new Vswitch;
	Verilated::traceEverOn(true);
	VerilatedContext *contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	VerilatedVcdC *tfp = new VerilatedVcdC;//init vcd file pointer
	dut->trace(tfp, 0);
	tfp->open("wave.vcd");

	while (sim_time<MAX_SIM_TIME) {
		int a = rand() & 1;
		int b = rand() & 1;
		dut->a = a;
		dut->b = b;
		dut->eval();
		printf("a = %d, b = %d, f = %d\n", a, b, dut->f);
		assert(dut->f == (a ^ b));

		tfp->dump(sim_time);
		contextp->timeInc(1);

		sim_time++;
	}
	delete dut;
	tfp->close();
	delete tfp;
	return 0;
}
