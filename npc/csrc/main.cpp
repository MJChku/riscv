#include "Vexp2.h"
#include "verilated.h"
#include <nvboard.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define TRACE 0

#if TRACE
#include "verilated_vcd_c.h"
VerilatedVcdC* tfp = NULL;
#endif

VerilatedContext* contextp = NULL;


static TOP_NAME* top;

void nvboard_bind_all_pins(TOP_NAME* top);

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	nvboard_update();
	#if TRACE
	tfp->dump(contextp->time());
	#endif
}

void sim_init(int argc, char** argv)
{

	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	top = new TOP_NAME;

	nvboard_bind_all_pins(top);
	nvboard_init();

	#if TRACE
	tfp = new VerilatedVcdC;
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("dump.vcd");
	#endif 
}

void sim_exit(){

	step_and_dump_wave();

	#if TRACE
	tfp->close();
	#endif

}


int main(int argc, char** argv, char** env){
	sim_init(argc, argv);

	while(!contextp->gotFinish() ){ 
		top->enable=1; top->x = 39;
		step_and_dump_wave();
		
		// top->s=1; top->X0 = 0; top->X1 = 2;top->X2 = 1; top->X3 = 3;
		// step_and_dump_wave();
		
	}
	
	sim_exit();
	return 0;
}
