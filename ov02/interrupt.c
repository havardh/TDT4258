#include "interrupt.h"

__int_handler *button_isr(void) {
	int led_status = piob->isr;

	switch(led_status) {
	case SW0:
		break;

	case SW1:
		break;

	case SW2:
		break;

	case SW3:
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
