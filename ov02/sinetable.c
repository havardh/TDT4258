void generate_sine_table( void ) {
	int i;
	for (i=0; i<SAMPLES; i++) {
		double fac = (double)i/SAMPLES;
		double x = fac * (2*PI);
		double y = sin( x ) * 20000;
		sine_table[i] = (int16_t)y;
	}
}
