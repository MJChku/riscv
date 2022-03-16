#include <nvboard.h>
#include "Vtimer.h"

void nvboard_bind_all_pins(Vtimer* top){
	nvboard_bind_pin(&top->enable, false, false, 1, SW8);
	nvboard_bind_pin(&top->pause, false, false, 1, SW7);
	nvboard_bind_pin(&top->reset, false, false, 1, SW6);
	nvboard_bind_pin(&top->hex0, false, true, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin(&top->hex1, false, true, 7, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin(&top->clk, true, false, 1, PS2_CLK);
}