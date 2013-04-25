#include "audio.h"

struct thread_data {
	char *sample_name;
};

static void *PlaySound( void *thread_arg ) {

        char *sample = (char*)thread_arg;

	FILE *dsp_fd = fopen( "/dev/dsp", "wb" );
	FILE *fd = fopen( sample, "rb" );

        if (!dsp_fd) {
            printf("could not open dsp\n");
            return;
        }

        if (!fd) {
             printf( "Could not open sample (%s)\n", sample );
             exit(0);
        }

        printf("opened (%d %d)\n"); 

	int c;
	while ( (c = fgetc(fd)) != EOF ) {
		fputc( c, dsp_fd );
	}

	fclose( fd );
	fclose( dsp_fd );
        printf( "DSP closed\n" );
}

void AudioPlay( char *sample ) {

	struct thread_data td = {
		.sample_name = sample
	};

	pthread_t thread;

	int rc = pthread_create(&thread, NULL, PlaySound, (void*) sample );

	if (rc) {
		printf("Could not play sound\n");
	}
}
