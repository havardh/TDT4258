#define SAMPLES 256
#define PI 3.14
short sine_table[SAMPLES];

void generate_sine_table( void ) {
	int i;
	for (i=0; i<SAMPLES; i++) {
		double fac = (double)i/SAMPLES;
		double x = fac * (2*PI);
		double y = sin( x ) * 500;
		sine_table[i] = (short)y;
	}
}
