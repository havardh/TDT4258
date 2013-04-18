#include "sounds.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

Sounds SoundNew ( void ) {

	char* test_file = "/home/avr32/project/sounds/test";
	char* dsp = "/dev/dsp";

	int fd = open( dsp, O_RDWR | O_CREAT | O_TRUNC );

	//int bitspersample = BITPERSAMPLE;
	//ioctl( fd, SNDCTL_DSP_SETFMT &bitspersample);

	//int channels = CHANNELS;
	//ioctl( fd, SNDCTL_DSP_CHANNELS, &channels);

	int dsp_rate = DSP_RATE;
	ioctl( fd, SOUND_PCM_WRITE_RATE, &dsp_rate );

	Sounds sound = {
		._fd = fd
	};

	return sound;

}

void SoundDestroy (Sounds *sound) {
	close( sound->_fd );
}

void Play( Sounds *sound, Sample *sample ) {



	printf("Writing to %d\n", sound->_fd);
	unsigned char buffer[BUF_SIZE];
	for (int i=0; i<BUF_SIZE; i++) {
		buffer[i] = rand();
	}
	for (int i=0; i<10000; i++) {
		write( sound->_fd, &buffer, BUF_SIZE );
	}
	buffer[0] = EOF;
	write( sound->_fd, &buffer, 1 );

}
