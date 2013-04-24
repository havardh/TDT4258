#include "audio.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

Audio AudioNew ( void ) {

	Audio audio = {
		._fd = fopen( "/dev/dsp", "wb" )
	};

	return audio;

}

void AudioDestroy (Audio *audio) {
	close( audio->_fd );
}

void Play( Audio *audio, char *sample ) {

	FILE *fd = fopen( sample, "rb" );

	int c;
	while ( (c = fgetc(fd)) != EOF ) {
		fputc( c, audio->_fd );
	}

	close( fd );

}
