#include "audio.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

struct thread_data {
	FILE *dsp_fd;
	char *sample_name;
};

Audio AudioNew ( void ) {

	Audio audio = {
		._fd = fopen( "/dev/dsp", "wb" )
	};

	return audio;

}

void AudioDestroy (Audio *audio) {
	close( audio->_fd );
}

static void *PlaySound( void *thread_arg ) {

	struct thread_data *td = (struct thread_data *) thread_arg;

	FILE *dsp = td->dsp_fd;
	FILE *fd = fopen( td->sample_name, "rb" );

	int c;
	while ( (c = fgetc(fd)) != EOF ) {
		fputc( c, audio->_fd );
	}

	close( fd );


}

void Play( Audio *audio, char *sample ) {

	struct thread_data td = {
		.dsp_fd = audio->_fd,
		.sample_name = sample
	};

	pthread_t thread;
	int rc = pthread_create(&thread, NULL, PlaySound, (void*) &td );
	if (rc) {
		printf("Could not play sound\n");
	}
}
