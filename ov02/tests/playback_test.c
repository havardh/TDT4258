#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "asserts.h"
#include "tests.h"

#include "note.h"
#include "playback.h"

void testShouldReturnZeroOnNoteIsNULL() {

	note = NULL;
	int16_t sample = get_playback_pitch();

	assertIntEqual(0, sample);

}

void testShouldReturn10000OnNoteNotNULL() {

	note = note_new(1, 100, 0, 0);
	int16_t sample = get_playback_pitch();
	assertIntEqual(10000, sample);

}

void testShouldReturnNullWhenSevenEightDone() {

	note = note_new(1, 100, 90, 0);

	int16_t sample = get_playback_pitch();
	assertIntEqual(0, sample);

}

void testShouldSwitchNoteWhenDone() {

	note = note_new(1, 100, 110, 0);
	struct note_t* note2 = note_new(1, 100, 90, 0);
	note->next = note2;

	get_playback_pitch();
	assertPtrEqual(note, note2);

}

void testShouldReturnZeroOnDone() {

	note = note_new(1, 100, 110, 0);

	int sample = get_playback_pitch();
	assertIntEqual(0, sample);
}

void testShouldAge() {

	note = note_new(1, 2, 0, 0);

	get_playback_pitch();
	get_playback_pitch();
	int sample = get_playback_pitch();
	assertIntEqual(0, sample);
}

void testShouldPlaySquare() {

	note = note_new(SAMPLES / 2, 4, 0, 0);

	assertIntEqual(get_playback_pitch(), 10000);
	assertIntEqual(get_playback_pitch(), -10000);
	assertIntEqual(get_playback_pitch(), 10000);
	assertIntEqual(get_playback_pitch(), -10000);
}
