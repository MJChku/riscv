#include <nvboard.h>
#include "Vexp2.h"

void nvboard_bind_all_pins(Vexp2* top){
	nvboard_bind_pin(&top->enable, false, false, 1, SW8);
	nvboard_bind_pin(&top->x, false, false, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin(&top->hex0, false, true, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin(&top->led0, false, true, 1, LD0);
	nvboard_bind_pin(&top->led1, false, true, 1, LD1);
	nvboard_bind_pin(&top->led2, false, true, 1, LD2);
	nvboard_bind_pin(&top->led4, false, true, 1, LD4);
}