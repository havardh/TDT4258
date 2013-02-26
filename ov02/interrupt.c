#include "interrupt.h"

void set_value(int v) {
	// Turn off lights
	pioc->codr = 0xFF;

	// Turn on lights
	pioc->sodr = v;
}

void rotate_left(void) {
	LED_VALUE = (LED_VALUE << 1);
}

void rotate_right(void) {
	LED_VALUE = (LED_VALUE >> 1);
}

__int_handler *button_isr(void) {
	int led_status = piob->isr;



	switch(led_status) {
	case SW0:
		rotate_right();
		break;

	case SW1:
		set_value(0x1);
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

	return 0;
}
