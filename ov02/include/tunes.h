#ifndef TUNES_H
#define TUNES_H

#include "tone.h"
#include <stdlib.h>

typedef struct note_t {
	int pitch;
	int duration;
} note_t;

void init_tune (note_t *tune);

#endif // TUNES_H
