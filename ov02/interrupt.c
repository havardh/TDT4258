#include "interrupt.h"

static int pressed = 0;

void set_value(int v) {
	// Turn off lights
	pioc->codr = 0xFF;

	// Turn on lights
	pioc->sodr = v;
}


void rotate_left(void) {
	LED_VALUE = (LED_VALUE *= 2);

}

void rotate_right(void) {
	LED_VALUE = (LED_VALUE /= 2);


}

__int_handler *button_isr(void) {
	int led_status = piob->isr;

	if (!pressed) {

		switch(led_status) {
		case SW0:
			//LIMIT++;
			break;

		case SW1:
			//LIMIT--;
			break;

		case SW2:
			rotate_left();
			break;

		case SW3:
			set_value(0x2);
			break;

		case SW4:
			break;

		case SW5:
			break;

		case SW6:
			break;

		case SW7:
			break;
		}
	}
	pressed = ~pressed;
	return 0;
}
