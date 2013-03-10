#include "note.h"

note_t* note_new(int pitch, int duration, int progress, note_t* next) {
	note_t* note = (note_t*)malloc(sizeof(note_t));
	note->pitch = pitch;
	note->duration = duration;
	note->progress = progress;
	note->next = next;
	return note;
}
