#include "audio.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

Audio AudioNew ( void ) {

#ifdef __APPLE__
	char* dsp = "./data/test";
#else
	char* dsp = "/dev/dsp";
#endif

	int fd = open( dsp, O_RDWR | O_CREAT | O_TRUNC );

#ifndef __APPLE__
	//int bitspersample = BITPERSAMPLE;
	//ioctl( fd, SNDCTL_DSP_SETFMT &bitspersample);

	//int channels = CHANNELS;
	//ioctl( fd, SNDCTL_DSP_CHANNELS, &channels);

	int dsp_rate = DSP_RATE;
	ioctl( fd, SOUND_PCM_WRITE_RATE, &dsp_rate );
#endif
	Audio audio = {
		._fd = fd
	};

	return audio;

}

void AudioDestroy (Audio *audio) {
	close( audio->_fd );
}

void Play( Audio *audio, char *sample ) {

	int fd = open( sample, O_RDWR, 0644 );

	char *buffer[BUF_SIZE];
	int n;

	while ((n = read( fd, buffer, BUF_SIZE )) > 0) {


		write( audio->_fd, buffer, n );
	}



	close( fd );

	/*	printf("Writing to %d\n", audio->_fd);

	uint8_t buffer[BUF_SIZE];
	for (int i=0; i<sample->size; i += BUF_SIZE) {

		for (int j=0; j<BUF_SIZE; j++) {
			buffer[j] = sample->samples[i];
		}

		write( audio->_fd, &buffer, BUF_SIZE );
		}*/

}
