#include "interrupt.h"
#include "playback.h"

static int16_t (*sample_fn)(int) = square_sample;
static struct note_t** tracks;

void init_tracks() {
	tracks = (note_t**) calloc (sizeof(note_t**), TRACKS);
	memset(tracks, NULL, TRACKS);
}

void tracks_finalize() {
	free (tracks);
}

void set_track(int track, note_t* n) {
	tracks[track] = n;
}

/*
note_t* get_track(int track) {
	return tracks[track];
}

void set_sample_fn(int16_t (*fn)(int)) {
	sample_fn = fn;
}
*/

static int16_t get_track_pitch(int i) {
	static int samples[TRACKS] = {0, 0, 0, 0};

	int16_t sound = 0;

	// If note is done
	if (tracks[i] && tracks[i]->progress >= tracks[i]->duration) {
		tracks[i] = tracks[i]->next; // Is NULL when tune is done
	}

	// Check if tune is done
	if (tracks[i] == NULL) {

	} else {

		if (tracks[i]->progress <= (int16_t)(tracks[i]->duration * tracks[i]->cutoff) ) {
			sound = (*sample_fn)(samples[i]);
		}

		tracks[i]->progress++;
		samples[i] += tracks[i]->pitch;

		if (samples[i] >= SAMPLES) {
			samples[i] = 0;
		}
	}

	return sound;
}

int16_t get_playback_pitch() {

	int16_t sound = 0;
	int i;
	int notNULL = 0;

	for (i=0; i<TRACKS; i++) {
		sound += get_track_pitch(i);
		if (notes[i] != NULL) {
			notNULL = 1;
		}
	}

	if (!notNULL) {
		// turn_off_abdac();
	}

	return sound;
}
