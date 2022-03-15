#include "Vmul41.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <nvboard.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static TOP_NAME* top;

void nvboard_bind_all_pins(TOP_NAME* top);

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	nvboard_update();
	tfp->dump(contextp->time());
}

void sim_init(int argc, char** argv)
{

	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	tfp = new VerilatedVcdC;
	top = new TOP_NAME;

	nvboard_bind_all_pins(top);
	nvboard_init();

	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("dump.vcd");
}

void sim_exit(){

	step_and_dump_wave();
	tfp->close();

}


int main(int argc, char** argv, char** env){
	sim_init(argc, argv);

	// while(!contextp->gotFinish() ){ 
		top->s=0; top->X0 = 0; top->X1 = 2;top->X2 = 1; top->X3 = 3;
		step_and_dump_wave();
		
		top->s=1; top->X0 = 0; top->X1 = 2;top->X2 = 1; top->X3 = 3;
		step_and_dump_wave();
		
	// }
	
	sim_exit();
	return 0;
}
