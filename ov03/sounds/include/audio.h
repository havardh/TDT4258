#ifndef AUDIO_H
#define AUDIO_H

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#ifndef __APPLE__
#include <linux/soundcard.h>
#endif
#include <fcntl.h>
#include <stdio.h>
#include "sample.h"

#define DSP_RATE 44100

typedef struct {

	int _fd;

} Audio;

Audio AudioNew( void );
void AudioDestroy( Audio* );

void Play( Audio*, Sample* );

#endif // AUDIO_H
