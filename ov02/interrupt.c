#include "interrupt.h"
#include "tone.h"
#include "sounds.h"
#include "gpio.h"

#define PLAYBACK_MODE 0
#define PIANO_MODE 1

static int mode = PIANO_MODE;
int playing = 1;

static uint8_t button_status;

static int scale[7] = { B2, A2, G2, F2, E2, D2, C2 };
static int samples[7] = { 0, 0, 0, 0, 0, 0, 0 }; // peker inn i sample
void (*sounds[7])(void) = {
	toccata,
        smb_1up,
        gunshot1,
        explosion,
        gunshot,
        smb_power_up,
        smb_death};

static int getIndexForButton(int button) {
	switch(button) {
	case SW1: return 0;
	case SW2: return 1;
	case SW3: return 2;
	case SW4: return 3;
	case SW5: return 4;
	case SW6: return 5;
	case SW7: return 6;
	}
	return -1;
}

static handle_mode_switch() {

  mode = !mode;
  
  if (mode == PLAYBACK_MODE) {

    set_leds(0xFF);
    turn_off_abdac();

  } else {

    set_leds(0);


  }

}

static void handle_piano_pressed(uint8_t button_down, uint8_t button_interrupt) {
  set_leds (button_down);
            
  button_status = button_down;

  if (button_down) {
    turn_on_abdac();
  }
  
  if (!(button_down & button_interrupt)) {
    turn_off_abdac();
  }

}

static void handle_sample_pressed(uint8_t button_down, uint8_t button_interrupt) {
  int index = getIndexForButton(button_interrupt);

  set_leds (~button_down);


  if (index != -1 && button_down) {

    turn_on_abdac();
    (*sounds[index])();

  }
}

static debounce() {
	//Debouncing
	int i;
	for (i = 0; i < 0xFFFF; i++)
		;
}

void button_isr(void) {
        debounce();

	uint8_t button_interrupt = piob->isr;
	uint8_t button_down = ~(uint8_t)piob->pdsr;
	playing = button_down;

        if ( button_interrupt == SW0 ) {

          if (button_down) {
            handle_mode_switch();
          }
          
        } else {
          if (mode == PIANO_MODE) {

            handle_piano_pressed(button_down, button_interrupt);

          } else {

            handle_sample_pressed(button_down, button_interrupt);

          }
          
        }

	//return 0;
}

int isDown(int button) {
  static uint8_t t[8] = { 2, 4, 8, 16, 32, 64, 128 };
  return t[button] & button_status;
}

static int16_t get_tone_pitch(int i) {
  int16_t sound = 0;
  if ( isDown(i) ) {
    sound = square_sample(samples[i]);
    samples[i] += scale[i];
    if (samples[i] >= SAMPLES) {
      samples[i] = 0;
    }
  }
  return sound;
}

static int16_t get_piano_pitch() {

	int16_t sound = 0;
	if (playing) {
          int i;
		for (i=0; i<7; i++) {
                  sound += get_tone_pitch(i);
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
