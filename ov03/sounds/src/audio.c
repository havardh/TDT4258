#include "audio.h"

#define CHANNELS 2
#define BITPERSAMPLE 8
#define BUF_SIZE 1024

struct thread_data {
	FILE *dsp_fd;
	char *sample_name;
};

Audio AudioNew ( void ) {

  //fopen( "/dev/dsp", "wb" );

	Audio audio = {
		._fd = NULL
	};

	return audio;

}

void AudioDestroy (Audio *audio) {
	close( audio->_fd );
}

static void *PlaySound( void *thread_arg ) {

	struct thread_data *td = (struct thread_data *) thread_arg;

	FILE *dsp = fopen( "/dev/dsp", "wb" );
	FILE *fd = fopen( td->sample_name, "rb" );
        
        printf( "%d\n", dsp );
        printf( "%d\n", fd );
        printf( "%s\n", td->sample_name );

	int c;
	while ( (c = fgetc(fd)) != EOF ) {
		fputc( c, dsp );
	}

	close( fd );
        close( dsp );


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
