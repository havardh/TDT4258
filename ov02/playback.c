#include "interrupt.h"
#include "playback.h"

static void (*sample_fn)(int);
static int samples[TRACKS] = {0, 0, 0, 0};
struct note_t** notes;

void init_tracks() {
	notes = (note_t**) calloc (sizeof(note_t**), TRACKS);
	memset(notes, NULL, TRACKS);
}

void tracks_finalize() {

	free (notes);

}

void set_track(int track, note_t* n) {
	notes[track] = n;
}

note_t* get_track(int track) {
	return notes[track];
}

void set_sample_fn(void (*fn)(int)) {
	sample_fn = fn;
}

static int16_t get_track_pitch(int i) {
	int16_t sound = 0;


	// If note is done
	if (notes[i] && notes[i]->progress >= notes[i]->duration) {
		notes[i] = notes[i]->next; // Is NULL when tune is done
	}

	// Check if tune is done
	if (notes[i] == NULL) {

	} else {
		// If within 7/8 or the tone play it
		if (notes[i]->progress <= (int16_t)(notes[i]->duration * notes[i]->cutoff)) {
			sound = sawtooth_sample(samples[i]);
		}
		notes[i]->progress++;
		samples[i] += notes[i]->pitch;

		if (samples[i] >= SAMPLES) {
			samples[i] = 0;
		}
	}

	return sound;
}

int16_t get_playback_pitch() {

	int16_t sound = 0;
	int i;
	for (i=0; i<2; i++) {
		sound += get_track_pitch(i);
	}

	return sound;
}
