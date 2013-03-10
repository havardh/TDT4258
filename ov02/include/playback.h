#ifndef PLAYBACK_H
#define PLAYBACK_H

#include "tunes.h"
#include "samples.h"
#include <stdint.h>

extern int playing;
extern struct note_t* note;

int16_t get_playback_pitch();

#endif // PLAYBACK_H
