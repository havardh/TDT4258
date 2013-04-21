#include "wave.h"
#include "fcntl.h"
#include <stdio.h>
#include "endian.h"

#define BUFFER_SIZE 1024

static RIFFHeader ReadRIFFHeader( int fd ) {

	RIFFHeader header;
	read( fd, &header, sizeof(header));
	return header;

}

static FmtHeader ReadFmtHeader( int fd ) {

	FmtHeader header;
	read( fd, &header, sizeof(header));
	return header;

}

void fix_endian( RIFFHeader *riff_header, FmtHeader *header) {

#ifdef __APPLE__
	riff_header->ChunkSize = endian_convert_uint32_t(&riff_header->ChunkSize);
#else

#endif

}

static char* read_field(char *field) {

	char *str = malloc(sizeof(char)*5);

	for (int i=0; i<4; i++) {
		str[i] = field[i];
	}

	str[4] = '\0';

	return str;

}

static void ReadWAVE( char *filename, Wave *wave ) {

	int fd = open( filename, O_RDWR );
	RIFFHeader riff_header = ReadRIFFHeader( fd );
	FmtHeader fmt_header = ReadFmtHeader( fd );
	//uint8_t buffer[BUFFER_SIZE];

	fix_endian( &riff_header, &fmt_header );

	printf("%s\n", &riff_header.ChunkID);
	//printf("%d\n", riff_header.ChunkSize);
	printf("%s\n", &riff_header.Format);

	printf("%s\n", &fmt_header.Subchunk1ID);

	close( fd );

}

Wave WaveNew( char* filename ) {

	Wave wave;

	ReadWAVE( filename, &wave );

	return wave;

}
