#include <nvboard.h>
#include "Vlfsr.h"

void nvboard_bind_all_pins(Vlfsr* top){
	nvboard_bind_pin(&top->hex0, false, true, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin(&top->hex1, false, true, 7, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin(&top->clk, true, false, 1, PS2_CLK);
}