#include "samples.h"

int16_t sine_table[SAMPLES];
int16_t square_table[SAMPLES];

void init_samples ( void ) {
	generate_sine_table();
	generate_square_table();
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

void generate_square_table( void ) {
	int i;
	for (i=0; i<SAMPLES; i++) {

		if (i < (SAMPLES / 2)) {
			square_table[i] = 10000;
		} else {
			square_table[i] = -10000;
		}
	}
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
