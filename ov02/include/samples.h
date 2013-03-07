#ifndef SAMPLES_H
#define SAMPLES_H

#include <stdint.h>
#include "oeving2.h"
#include <math.h>

int16_t sine_table[SAMPLES];
int16_t square_table[SAMPLES];

void init_samples( void );
void generate_square_table( void );
void generate_sine_table ( void );

#endif // SAMPLES_H
