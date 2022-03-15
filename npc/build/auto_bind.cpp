#include <nvboard.h>
#include "Vmul41.h"

void nvboard_bind_all_pins(Vmul41* top){
	nvboard_bind_pin(&top->X0, false, false, 2, SW2, SW3);
	nvboard_bind_pin(&top->X1, false, false, 2, SW4, SW5);
	nvboard_bind_pin(&top->X2, false, false, 2, SW6, SW7);
	nvboard_bind_pin(&top->X3, false, false, 2, SW8, SW9);
	nvboard_bind_pin(&top->s, false, false, 2, SW0, SW1);
	nvboard_bind_pin(&top->y, false, true, 2, LD0, LD1);
}