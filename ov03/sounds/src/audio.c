#include "sounds.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

Audio AudioNew ( void ) {

	char* test_file = "/home/avr32/project/sounds/test";
	char* dsp = "/dev/dsp";

	int fd = open( dsp, O_RDWR | O_CREAT | O_TRUNC );

	//int bitspersample = BITPERSAMPLE;
	//ioctl( fd, SNDCTL_DSP_SETFMT &bitspersample);

	//int channels = CHANNELS;
	//ioctl( fd, SNDCTL_DSP_CHANNELS, &channels);

	int dsp_rate = DSP_RATE;
	ioctl( fd, SOUND_PCM_WRITE_RATE, &dsp_rate );

	Audio audio = {
		._fd = fd
	};

	return audio;

}

void AudioDestroy (Audio *audio) {
	close( audio->_fd );
}

void Play( Audio *audio, Sample *sample ) {

	printf("Writing to %d\n", audio->_fd);

	uint8_t buffer[BUF_SIZE];
	for (int i=0; i<sample->size; i += BUF_SIZE) {

		for (int j=0; j<BUF_SIZE; j++) {
			buffer[j] = sample->samples[i];
		}

		write( audio->_fd, &buffer, BUF_SIZE );
	}

}
