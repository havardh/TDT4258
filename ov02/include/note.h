#ifndef NOTE_H
#define NOTE_H

#include <stdlib.h>

typedef struct note_t {
	int pitch;
	int duration;
	int progress;
	double cutoff;
	struct note_t *next;
} note_t;

note_t* note_new(int pitch, int duration, note_t* next);
note_t* even_tune(int pitch[], int n, int duration, double cutoff);
note_t* variable_tune(int pitch_dur[], int n, double cutoff);

#endif // NOTE_H
