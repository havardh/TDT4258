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
#include <pthread.h>

void AudioPlay( char* );

#endif // AUDIO_H
