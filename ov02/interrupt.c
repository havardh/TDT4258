#include "interrupt.h"
#include "tone.h"
#define PIANO_MODE 1
#define PLAYBACK_MODE 2

static int mode = PIANO_MODE;
static int playing = 1;
static int sample = 0;
static int tone = A4;

int8_t get_leds(void);
void set_leds(int8_t);
void set_tone(int8_t);


__int_handler *button_isr(void) {
  //Debouncing
	int i;
	for (i = 0; i < 0xFFFF; i++)
		;

	int button_interrupt = piob->isr;
	int button_up = piob->pdsr;
	switch (~button_up & button_interrupt) {
	case SW0://Toggle Mode
		mode = !mode;
		set_leds(get_leds() ^ 0xFF);
		break;

	case SW1: {//H
		if(mode == PIANO_MODE) {
			set_leds(0x2);
			set_tone(B);
		} else {
			set_leds(0xFD);
		}
		break;
	}

	case SW2: {//A
		if(mode == PIANO_MODE) {
			set_leds(0x4);
			set_tone(A);
		} else {
			set_leds(0xFB);
		}
		break;
	}
	case SW3: {//G
		if(mode == PIANO_MODE) {
			set_leds(0x8);
			set_tone(G);
		} else {
			set_leds(0xF7);
		}
		break;
	}

	case SW4: {//F
		if(mode == PIANO_MODE) {
			set_leds(0x10);
			set_tone(F);
		} else {
			set_leds(0xEF);
		}
		break;
	}
	case SW5: {//E
		if(mode == PIANO_MODE) {
			set_leds(0x20);
			set_tone(E);
		} else {
			set_leds(0xDF);
		}
		break;
	}
	case SW6: {//D
		if(mode == PIANO_MODE) {
			set_leds(0x40);
			set_tone(D);
		} else {
			set_leds(0xBF);
		}
		break;
	}
	case SW7: {//C
		if(mode == PIANO_MODE) {
			set_leds(0x80);
			set_tone(C);
		} else {
			set_leds(0x7F);
		}
		break;
	}
	}

	return 0;
}

void set_tone(int8_t pitch) {
	tone = pitch;
}

__int_handler *abdac_isr(void) {
	int sound;

	if (playing) {
		sound = square_table[sample];


		sample += tone;

		if (sample >= SAMPLES) {
			sample = 0;
		}

	} else { 
		sound = 0;
	}

	dac->SDR.channel0 = sound;
	dac->SDR.channel1 = sound;
	
	return 0;
}


/*
static int i = 0;
static int sample = 0;
static int tone_number = 0;
static struct note_t *n;
*/
/*__int_handler *abdac_isr(void) {

	dac->SDR.channel0 = 0;
	dac->SDR.channel1 = 0;


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
}*/
