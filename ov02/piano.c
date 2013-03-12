#include "piano.h"

// Piano state and scale
static int scale[7] = { B2, A2, G2, F2, E2, D2, C2 };
static int samples[7] = { 0, 0, 0, 0, 0, 0, 0 }; // peker inn i sample


static int isDown(int button) {
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

int16_t get_piano_pitch() {

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
