#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "asserts.h"
#include "tests.h"

#include "note.h"
#include "playback.h"

void setUp() {
	init_tracks();
}

void tearDown() {
	tracks_finalize();
}

void testShouldBeContructed() {

	set_track(0, (void*)0);
	set_track(1, (void*)1);
	set_track(2, (void*)2);
	set_track(3, (void*)3);

	assertPtrEqual((void*)0, get_track(0));
	assertPtrEqual((void*)1, get_track(1));
	assertPtrEqual((void*)2, get_track(2));
	assertPtrEqual((void*)3, get_track(3));

}

void testShouldReturnZeroOnNoteIsNULL() {

	set_track(0, NULL);
	int16_t sample = get_playback_pitch();

	assertIntEqual(0, sample);

}

void testShouldReturn10000OnNoteNotNULL() {

	set_track(0, note_new(1, 100, 0, 0));
	int16_t sample = get_playback_pitch();
	assertIntEqual(10000, sample);

}

void testShouldReturnNullWhenSevenEightDone() {

	set_track(0, note_new(1, 100, 90, 0));

	int16_t sample = get_playback_pitch();
	assertIntEqual(0, sample);

}

void testShouldSwitchNoteWhenDone() {

	struct note_t* note = note_new(1, 100, 110, 0);
	struct note_t* note2 = note_new(1, 100, 90, 0);
	note->next = note2;
	set_track(0, note);

	get_playback_pitch();
	assertPtrEqual(get_track(0), note2);

}

void testShouldReturnZeroOnDone() {

	set_track(0, note_new(1, 100, 110, 0));

	int sample = get_playback_pitch();
	assertIntEqual(0, sample);
}

void testShouldAge() {

	set_track(0, note_new(1, 2, 0, 0));

	get_playback_pitch();
	get_playback_pitch();
	int sample = get_playback_pitch();
	assertIntEqual(0, sample);
}

void testShouldPlaySquare() {

	set_track(0, note_new(SAMPLES / 2, 4, 0, 0));

	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());
	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());
}

void testFourthShouldBeLessFrequent() {

	set_track(0, note_new(SAMPLES / 4, 4, 0, 0));

	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());

}

void testEightShouldBeLesserFrequent() {

	set_track(0, note_new(SAMPLES / 8, 8, 0, 0));

	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());
	assertIntEqual(-10000, get_playback_pitch());


}

void testShouldPlayTwoSimultainiousTones() {
	set_track(0, note_new(SAMPLES / 2, 8, 0, 0));
	set_track(1, note_new(SAMPLES / 4, 8, 0, 0));

	assertIntEqual(20000, get_playback_pitch());
	assertIntEqual(0, get_playback_pitch());
	assertIntEqual(0, get_playback_pitch());
	assertIntEqual(-20000, get_playback_pitch());

	assertIntEqual(20000, get_playback_pitch());
	assertIntEqual(0, get_playback_pitch());
	assertIntEqual(0, get_playback_pitch());
	assertIntEqual(-20000, get_playback_pitch());
}
