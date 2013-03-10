#include "playback.h"

struct note_t* note;
int playing = 0;

int16_t get_playback_pitch() {

	static int sample = 0;

	int16_t sound = 0;
	// If note is done
	if (note && note->progress >= note->duration) {
		note = note->next; // Is NULL when tune is done
	}

	// Check if tune is done
	if (note == NULL) {
		playing = 0;
	} else {

		if (note->progress <= (int16_t)(note->duration * (7.0 / 8.0))) {
			sound = square_sample(sample);
		}
	}

	if (note) {
		sample += note->pitch;
	} else {
		sample = 0;
	}

	if (sample >= SAMPLES) {
		sample = 0;
	}

	return sound;
}
