#ifndef SAMPLE_H
#define SAMPLE_H

#include "wave.h"

typedef struct {
	uint32_t id;
	uint32_t size;
	uint8_t *samples;
} Sample;

Sample SampleNew( char *filename );

#endif // SAMPLE_H
