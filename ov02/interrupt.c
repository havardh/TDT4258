#include "interrupt.h"
#include "tone.h"
#include "sounds.h"

#define PLAYBACK_MODE 0
#define PIANO_MODE 1

static int mode = PIANO_MODE;
int playing = 1;

static int tone1 = -1;
static int tone2 = -1;

int8_t get_leds(void);
void set_leds(int8_t);
void set_tone(int8_t);

static int scale[7] = { B, A, G, F, E, D, C };
static int samples[7] = { -1, -1, -1, -1, -1, -1, -1 }; // peker inn i sample
void (*sounds[7])(void) = { sound1, silent, silent, silent, silent, silent, silent };

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
        int index = foo(button_interrupt);
        if (mode == PIANO_MODE) {          
          set_leds (button_down);

          if (button_down) {
            samples[index] = 0;
          } else {
            samples[index] = -1;
          }
        } else {
          set_leds (~button_down);
          if (index != -1) {
            (*sounds[index])();
          }
          //sound_scale();
        }

        if (button_down) {
          
          set_leds(button_interrupt);

          if (button_interrupt == SW0) {
              mode = !mode;
              set_leds(get_leds() ^ 0xFF);
            }
        }

	return 0;
}

void set_tone(int8_t pitch) {
  if (!playing) {
	tone1 = pitch;
  } else {
    tone2 = pitch;
  }
}

static int16_t get_piano_pitch() {
        static int sample1 = 0;
        static int sample2 = 0;

	int16_t sound = 0;
	if (playing) {
          int i;
          for (i=0; i<7; i++) {
            if (samples[i] != -1) {
              sound += square_table[samples[i]];
              samples[i] += scale[i];
              if ( samples[i] >= SAMPLES) {
                samples[i] = 0;
              }
            }
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
