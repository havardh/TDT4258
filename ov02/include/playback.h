#ifndef PLAYBACK_H
#define PLAYBACK_H

#include "samples.h"
#include "note.h"
#include "gpio.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define TRACKS 4

extern struct note_t** notes;

void init_tracks();
void tracks_finalize();

void set_track(int, note_t*);
note_t* get_track(int);
void set_sample_fn(int16_t (*fn)(int));

int16_t get_playback_pitch();

#endif // PLAYBACK_H
