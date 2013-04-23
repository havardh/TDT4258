#include "readfile.h"
/*
uint8_t read_file( int fd, int offset, int size ) {

	lseek( fd, offset, SEEK_SET );

	uint8_t *data = malloc(size);
	uint8_t *ptr = data;

	uint8_t buffer[BUFFER_SIZE];
	for (int i=0; i < (size - offset) / BUFFER_SIZE; i++) {
		read( fd, buffer, BUFFER_SIZE );

		for (int i=0; i<BUFFER_SIZE; i++) {
			(*ptr++) = buffer[i];
		}
	}

	int remaining = size % BUFFER_SIZE;
	if (remaining) {
		read( fd, buffer, remaining);

		for (int i=0; i<remaining; i++) {

			(*ptr++) = buffer[i];
		}
	}

	return data;

}
*/
