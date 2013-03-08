#include <stdio.h>
#include <math.h>

// http://amarkham.com/?p=49

#define PI 3.14
#define CROP 512
#define SHORT_MAX 32768
#define N 64

int16_t sine_puls(double t, double ampl, double period) {
	double value = sin(t*period) * ampl;
	int16_t normalized = (int16_t)(value * SHORT_MAX);
	return normalized;
}

int divs (double a, double b) {

	int i;
	for (i=0; (a-b) > 0; ++i) {
		a -= b;
	}

	return i;

}

int16_t square_puls(double t, double ampl, double period) {

	if ( divs(t * period, PI) % 2 == 0) {
		return (SHORT_MAX-1) * ampl;
	} else {
		return (ampl *-SHORT_MAX);
	}

}


int16_t sawtooth_puls(double t, double ampl, double period) {
	int div = divs(t*period/2*PI, 2*PI);
	double value = t*period/2*PI - div*2*PI;
	double normalized = value * (SHORT_MAX *ampl) - (SHORT_MAX*ampl);

	return normalized;
}


int16_t triangle_puls(double t, double ampl, double period) {

	double DPI = 2*PI;
	int16_t value = 0;
	int div = divs(t/DPI, DPI);

	value = sawtooth_puls(t, ampl, period);
	if (div % 2 == 1) {
		value = 2*SHORT_MAX - value;
	}

	return value;
}

void print_sample(int n) {
	int target = (n + SHORT_MAX) / CROP;
	for(int i=0; i<target; i++) {
		printf(" ");
	}
	printf("|\n");
}

void print_samples(int *samples, int n) {

	for (int i=0; i<n; i++) {
		int sample = samples[i];
		print_sample(sample);
	}
}

// f(n) = rot(2, 12)^(n-49) * 440 Hz
// A4 = 49 => f(A4) = 440 Hz

void test(int16_t (*tone_fn)(double, double, double)) {

	double sample_rate = 81920;
	double frequency = 440;
	double R = (65536 * (sample_rate / frequency)) ; //2^16

	int samples[N];
	double t = 0, dt = R;
	for(int i=0; i<N; i++, t += dt) {
		samples[i] = tone_fn(t, 1, 1);
	}

	print_samples(samples, N);

}

void assertEquals(int16_t expected, int16_t actual, double d) {

	double diff = expected - actual;
	diff = (diff < 0 ? -diff : diff);

	if (diff > d) {
		fprintf(stderr, "Expected %d to be %d\n", actual, expected);
	}

}

void sawtooth_test() {

	assertEquals(-SHORT_MAX, sawtooth_puls(0, 1, 1), 0.0001);

}


int main() {

	//sawtooth_test();

	printf(" ---  sine --- \n");
	test(&sine_puls);

	printf(" ---  square --- \n");
	test(&square_puls);
	exit(0);

	printf(" ---  triangle --- \n");
	test(&triangle_puls);

	printf(" ---  sawtooth --- \n");
	test(&sawtooth_puls);

	return 0;
}
