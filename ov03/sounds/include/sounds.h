#ifndef SOUNDS_H
#define SOUNDS_H

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <linux/soundcard.h>
#include <fcntl.h>
#include <stdio.h>
#include "sample.h"

#define DSP_RATE 44100

typedef struct {

	int _fd;

} Sounds;

Sounds SoundNew( void );
void SoundDestroy( Sounds* );

void Play( Sounds*, Sample* );

#endif // SOUNDS_H
