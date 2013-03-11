#include "note.h"

note_t* note_new(int pitch, int duration, note_t* next) {
	note_t* note = (note_t*)malloc(sizeof(note_t));
	note->pitch = pitch;
	note->duration = duration;
	note->progress = 0;
	note->next = next;
	return note;
}
