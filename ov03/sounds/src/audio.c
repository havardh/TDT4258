#include "audio.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

struct thread_data {
	char *sample_name;
};

Audio AudioNew ( void ) {
	Audio audio;
	return audio;

}

void AudioDestroy (Audio *audio) {
	close( fd_dsp );
}

static void *PlaySound( void *thread_arg ) {

	struct thread_data *td = (struct thread_data *) thread_arg;

	FILE *dsp_fd = fopen( "/dev/dsp", "wb" );
	FILE *fd = fopen( td->sample_name, "rb" );

	int c;
	while ( (c = fgetc(fd)) != EOF ) {
		fputc( c, dsp_fd );
	}

	close( fd );
	close( dsp_fd );

}

void Play( Audio *audio, char *sample ) {

	struct thread_data td = {
		.sample_name = sample
	};

	pthread_t thread;

	int rc = pthread_create(&thread, NULL, PlaySound, (void*) &td );

	if (rc) {
		printf("Could not play sound\n");
	}
}
