#include "samples.h"

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
