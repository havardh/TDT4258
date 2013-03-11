#include "interrupt.h"
#include "tone.h"
#include "sounds.h"

#define PLAYBACK_MODE 0
#define PIANO_MODE 1

static int mode = PIANO_MODE;
int playing = 1;
static int sample = 0;
static int tone = A4;

int8_t get_leds(void);
void set_leds(int8_t);
void set_tone(int8_t);

static int scale[7] = { B, A, G, F, E, D, C };

static int foo(int index) {
  if (index == SW1) return 0;
  else if (index == SW2) return 1;
  else if (index == SW3) return 2;
  else if (index == SW4) return 3;
  else if (index == SW5) return 4;
  else if (index == SW6) return 5;
  else if (index == SW7) return 6;
  else return -1;
}

void button_isr(void) {
  //Debouncing
	int i;
	for (i = 0; i < 0xFFFF; i++)
		;

	uint8_t button_interrupt = piob->isr;
	uint8_t button_down = ~(uint8_t)piob->pdsr;
        
        playing = button_down;

        if (mode == PIANO_MODE) {
          set_leds (button_down);
          set_tone(scale[foo(button_down)]);
        } else {
          set_leds (~button_down);
        }

        if (button_down) {
          
          set_leds(button_interrupt);

	switch (button_interrupt) {
        case SW0: {//Toggle Mode
                mode = !mode;
                set_leds(get_leds() ^ 0xFF);
                break;
          }

	case SW1: {//H

		if(mode == PIANO_MODE) {
                  //set_tone(B);
		} else {
			sound1();		
                }
		break;
	}

	case SW2: {//A
		if(mode == PIANO_MODE) {
                  //set_tone(A);
		} else {
                        silent();
		}
		break;
	}
	case SW3: {//G
		if(mode == PIANO_MODE) {
                  //set_tone(G);
		} else {
                        silent();
		}
		break;
	}

	case SW4: {//F
		if(mode == PIANO_MODE) {
                  //set_tone(F);
		} else {
                        silent();
		}
		break;
	}
	case SW5: {//E
		if(mode == PIANO_MODE) {
                  //set_tone(E);
		} else {
                        silent();
		}
		break;
	}
	case SW6: {//D
		if(mode == PIANO_MODE) {
                  //set_tone(D);
		} else {
                        silent();
		}
		break;
	}
	case SW7: {//C
		if(mode == PIANO_MODE) {
                  //set_tone(C);
		} else {
                        silent();
		}
		break;
	}
	}
        }

	return 0;
}

void set_tone(int8_t pitch) {
	tone = pitch;
}

static int16_t get_piano_pitch() {
	int16_t sound;
	if (playing) {
		sound = square_table[sample];
		sample += tone;
		if (sample >= SAMPLES) {
			sample = 0;
		}

	} else {
		sound = 0;
	}
	return sound;
}


static void set_dac_sample(int16_t sound) {
	dac->SDR.channel0 = sound;
	dac->SDR.channel1 = sound;
}



__int_handler *abdac_isr(void) {
	int16_t sound;

	switch (mode) {

	case PIANO_MODE:
		sound = get_piano_pitch();
		break;

	case PLAYBACK_MODE:
		sound = get_playback_pitch();
		break;
	}

	set_dac_sample(sound);

	return 0;
}
