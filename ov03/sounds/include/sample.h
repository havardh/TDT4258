#ifndef SAMPLE_H
#define SAMPLE_H

#include "wave.h"

typedef struct {
	uint32_t id;
	uint32_t size;
	uint8_t *samples;
} Sample;

Sample SampleNew( void );

#endif // SAMPLE_H
