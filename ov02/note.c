#include "note.h"

note_t* note_new(int pitch, int duration, note_t* next) {
	note_t* note = (note_t*)malloc(sizeof(note_t));
	note->pitch = pitch;
	note->duration = duration;
	note->progress = 0;
        note->cutoff = 0.875; // 7.0 / 8.0
	note->next = next;
	return note;
}

note_t* even_tune(int pitch[], int n, int duration, double cutoff) {

  struct note_t* next = NULL;
  int i;
  for (i=n-1; i>=0; i--) {
    struct note_t* n = note_new(pitch[i], duration, next);
    n->cutoff = cutoff;
    next = n;
  }

  return next;
}

note_t* variable_tune(int pitch_dur[], int n, double cutoff) {

  struct note_t* next = NULL;
  int i;
  for (i=n-1; i>=0; i--) {
    struct note_t* n = note_new(pitch_dur[i*2], pitch_dur[i*2+1], next);
    n->cutoff = cutoff;
    next = n;
  }

  return next;
}
