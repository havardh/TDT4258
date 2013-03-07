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

static int i = 0;
static int sample = 0;
static int tone_number = 0;
static struct note_t *n;

__int_handler *abdac_isr(void) {

	if (i > 0 ) { //n->duration) {
		i = 0;
		tone_number++;
		if (tone_number >= 22) { tone_number = 0; }
		//n = &tune[tone_number];
	}
	i++;
	int16_t sound_wave;
	if (i > 0 ) { // n->duration * (7.0 / 8.0)) {
		sound_wave = 0;
	} else {
		sound_wave = square_table[sample];
	}

	dac->SDR.channel0 = sound_wave;
	dac->SDR.channel1 = sound_wave;

	sample += 0; // n->pitch;

	if (sample >= SAMPLES) {
		sample = 0;
	}

	return 0;
}
