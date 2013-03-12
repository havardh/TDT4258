#include "samples.h"

int16_t sine_table[SAMPLES];

void init_samples ( void ) {
	generate_sine_table();
}

void generate_sine_table( void ) {
	int i;
	for (i=0; i<SAMPLES; i++) {
		double fac = (double)i/SAMPLES;
		double x = fac * (2*PI);
		double y = sin( x ) * 20000;
		sine_table[i] = (int16_t)y;
	}
}

int16_t sine_sample(int sample) {
	sample %= SAMPLES;
	return sine_table[sample];
}

int16_t square_sample( int sample ) {

	sample %= SAMPLES;

	int16_t sound = 0;
	if (sample < (SAMPLES / 2)) {
		sound = 10000;
	} else {
		sound = -10000;
	}
	return sound;
}

int16_t sawtooth_sample( int sample ) {
	sample %= SAMPLES;

	return sample * 3;
}

int16_t triangle_sample( int sample ) {
	sample %= SAMPLES;

	if (sample < (SAMPLES / 2)) {
		return sample * 6;
	} else {
		return SAMPLES * 6 - (sample * 6);
	}

}
