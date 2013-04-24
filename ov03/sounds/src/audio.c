#include "audio.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

Audio AudioNew ( void ) {
	/*
#ifdef __APPLE__
	char* dsp = "./data/test";
#else
	char* dsp = "/dev/dsp";
#endif

	printf("%s\n", dsp);

	int fd = fopen( dsp, "wb" );

#ifndef __APPLE__
	//int bitspersample = BITPERSAMPLE;
	//ioctl( fd, SNDCTL_DSP_SETFMT &bitspersample);

	//int channels = CHANNELS;
	//ioctl( fd, SNDCTL_DSP_CHANNELS, &channels);

	int dsp_rate = DSP_RATE;
	ioctl( fd, SOUND_PCM_WRITE_RATE, &dsp_rate );
#endif
*/
	Audio audio = {
		._fd = fd
	};

	return audio;

}

void AudioDestroy (Audio *audio) {
	close( audio->_fd );
}

void Play( Audio *audio, char *sample ) {

	FILE *fd1 = fopen( sample, "rb" );
	FILE *fd2 = fopen( "/dev/dsp", "wb" );

	int c;
	while ( (c = fgetc(fd1)) != EOF ) {
		fputc( c, fd2 );
	}

	close( fd1 );
	close( fd2 );

}
