#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <nvboard.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


static TOP_NAME* top;

void nvboard_bind_all_pins(Vtop* top);

void single_cycle(){
	top->clk=0; top->eval();
	top->clk=1; top->eval();
}

void reset(int n){
	top->rst = 1;
	while(n-->0) single_cycle();
	top->rst = 0;
}

int main(int argc, char** argv, char** env){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	top = new Vtop{contextp};
	Verilated::traceEverOn(true);
	//VerilatedFstC* tfp = new VerilatedFstC;
	//top->trace(tfp, 99);
	
	nvboard_bind_all_pins(top);
	nvboard_init();

	reset(10);

	while(!contextp->gotFinish() ){ 
		contextp->timeInc(1);
		nvboard_update();
		
		single_cycle();

		/*int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
		top->eval(); 
		//tfp->dump(contextp->time());
		printf("a = %04x, b=%04x, f=%04x \n", a, b, top->f);
		*/
	}
	delete top;
	delete contextp;
      //	tfp->close();
	return 0;
}
