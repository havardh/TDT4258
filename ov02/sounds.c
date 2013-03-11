#include "sounds.h"
#include "tone.h"

void sound1( void ) {

	struct note_t* note8 = note_new(C1, FORTH, 0, 0);
	struct note_t* note7 = note_new(B, FORTH, 0, note8);
	struct note_t* note6 = note_new(A, FORTH, 0, note7);
	struct note_t* note5 = note_new(G, FORTH, 0, note6);
	struct note_t* note4 = note_new(F, FORTH, 0, note5);
	struct note_t* note3 = note_new(E, FORTH, 0, note4);
	struct note_t* note2 = note_new(D, FORTH, 0, note3);
	struct note_t* note1 = note_new(C, FORTH, 0, note2);

	set_track(0, note1);
}
