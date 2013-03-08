#include "interrupt.h"
#define PIANO_MODE 1;
#define PLAYBACK_MODE 2;

static int mode = PIANO_MODE
;

__int_handler *button_isr(void) {
	int i;
	for (i = 0; i < 0xFFFF; i++)
		;

	int led_status = piob->isr;

	switch (led_status) {
	case SW0://Toggle Mode
		set_leds(0x1);
		break;

	case SW1: {//H
		if(mode == PIANO_MODE) {
			set_leds(0x2);
		} else {
			set_leds(0xFD);
		}
		break;
	}

	case SW2: {//A
		if(mode == PIANO_MODE) {
			set_leds(0x4);
		} else {
			set_leds(0xFB)
		}
		break;
	}
	case SW3: {//G
		if(mode == PIANO_MODE) {
			set_leds(0x8);
		} else {
			set_leds(0xF7)
		}
		break;
	}

	case SW4: {//F
		if(mode == PIANO_MODE) {
			set_leds(0x16);
		} else {
			set_leds(0xEF)
		}
		break;
	}
	case SW5: {//E
		if(mode == PIANO_MODE) {
			set_leds(0x32);
		} else {
			set_leds(0xDF)
		}
		break;
	}
	case SW6: {//D
		if(mode == PIANO_MODE) {
			set_leds(0x64);
		} else {
			set_leds(0xBF)
		}
		break;
	}
	case SW7: {//C
		if(mode == PIANO_MODE) {
			set_leds(0x128);
		} else {
			set_leds(0x7F)
		}
		break;
	}
	}

	return 0;
}

static int i = 0;
static int sample = 0;
static int tone_number = 0;
static struct note_t *n;

__int_handler *abdac_isr(void) {

	if (i > 0) { //n->duration) {
		i = 0;
		tone_number++;
		if (tone_number >= 22) {
			tone_number = 0;
		}
		//n = &tune[tone_number];
	}
	i++;
	int16_t sound_wave;
	if (i > 0) { // n->duration * (7.0 / 8.0)) {
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
