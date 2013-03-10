#ifndef NOTE_H
#define NOTE_H

#include <stdlib.h>

typedef struct note_t {
	int pitch;
	int duration;
	int progress;
	struct note_t *next;
} note_t;

note_t* note_new(int pitch, int duration, int progress, note_t* next);

#endif // NOTE_H
