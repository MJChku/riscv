#include "Vexp3.h"
#include "verilated.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define TRACE 1
#define NVBOARD 0
#if NVBOARD
#include <nvboard.h>
#endif   

#if TRACE
#include "verilated_vcd_c.h"
VerilatedVcdC* tfp = NULL;
#endif

VerilatedContext* contextp = NULL;


static TOP_NAME* top;

#if NVBOARD
void nvboard_bind_all_pins(TOP_NAME* top);
#endif 

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);

	#if NVBOARD
	nvboard_update();
	#endif 

	#if TRACE
	tfp->dump(contextp->time());
	#endif
}

void sim_init(int argc, char** argv)
{

	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	top = new TOP_NAME;

	#if NVBOARD
	nvboard_bind_all_pins(top);
	nvboard_init();
	#endif

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

	// while(!contextp->gotFinish() ){ 
	top->selector=1; top->A =-1; top->B=-8; step_and_dump_wave();
	top->selector=1; top->A =-8; top->B=-1; step_and_dump_wave();
	top->selector=6; top->A =-1; top->B=-8; step_and_dump_wave();
	top->selector=6; top->A =-8; top->B=-1; step_and_dump_wave();
	top->selector=6; top->A =7; top->B=-8; step_and_dump_wave();
	top->selector=7; top->A =-8; top->B=-8; step_and_dump_wave();
	top->selector=7; top->A =4; top->B=4; step_and_dump_wave();
	
		// top->s=1; top->X0 = 0; top->X1 = 2;top->X2 = 1; top->X3 = 3;
		// step_and_dump_wave();
		
	// }
	
	sim_exit();
	return 0;
}
