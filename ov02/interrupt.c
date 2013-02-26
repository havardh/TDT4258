void rotate_left(void) {
	LED_VALUE = (LED_VALUE >> 1);
}

void rotate_right(void) {
	LED_VALUE = (LED_VALUE << 1);
}

void button_isr(void) {
	int led_status = piob->isr;

	switch(led_status) {
	case SW0:
		rotate_right();
		break;

	case SW1:
		break;

	case SW2:
		rotate_left();
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
}
