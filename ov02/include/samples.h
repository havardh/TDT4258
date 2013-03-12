#ifndef SAMPLES_H
#define SAMPLES_H

#include <stdint.h>
#include <math.h>

#define SAMPLES 4096
#define PI 3.14
#define SHORT_MAX 32768

extern int16_t sine_table[SAMPLES];

void init_samples( void );
void generate_sine_table ( void );

int16_t sine_sample (int);
int16_t square_sample (int);
int16_t sawtooth_sample (int);
int16_t triangle_sample (int);

#endif // SAMPLES_H
