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

void fix_endian( RIFFHeader *riff_header, FmtHeader *fmt_header, Wave *wave) {

	// Fix RIFF Header
#ifdef __APPLE__
	//riff_header->ChunkID = endian_convert_uint32_t(&riff_header->ChunkID);
	//riff_header->Format = endian_convert_uint32_t(&riff_header->Format);
#else
	riff_header->ChunkSize = endian_convert_uint32_t(&riff_header->ChunkSize);
#endif

	// Fix Fmt Header
#ifdef __APPLE__
	fmt_header->Subchunk1ID = endian_convert_uint32_t(&fmt_header->Subchunk1ID);
#else
	fmt_header->Subchunk1Size = endian_convert_uint32_t(&fmt_header->Subchunk1Size);
	fmt_header->AudioFormat = endian_convert_uint16_t(&fmt_header->AudioFormat);
	fmt_header->NumChannels = endian_convert_uint16_t(&fmt_header->NumChannels);
	fmt_header->SampleRate = endian_convert_uint32_t(&fmt_header->SampleRate);
	fmt_header->ByteRate = endian_convert_uint32_t(&fmt_header->ByteRate);
	fmt_header->BlockAlign = endian_convert_uint16_t(&fmt_header->BlockAlign);
	fmt_header->BitsPerSample = endian_convert_uint16_t(&fmt_header->BitsPerSample);
#endif

	// Fix wave
#ifdef __APPLE__
	wave->Subchunk2ID = endian_convert_uint32_t(&wave->Subchunk2ID);
#else
	wave->Subchunk2Size = endian_convert_uint32_t(&wave->Subchunk2Size);
#endif

	//fmt_header-> = endian_convert_uint16_t(fmt_header->);
	//fmt_header-> = endian_convert_uint32_t(fmt_header->);

}

static char* read_field(char *field) {

	char *str = malloc(sizeof(char)*5);

	for (int i=0; i<4; i++) {
		str[i] = field[i];
	}

	str[4] = '\0';

	return str;

}

static void ReadSamples( int fd, Wave *wave ) {

	int size =  wave->Subchunk2Size;

	uint8_t *data = malloc(size);
	uint8_t *ptr = data;

	uint8_t buffer[BUFFER_SIZE];
	for (int i=0; i < size / BUFFER_SIZE; i++) {
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

	wave->samples = data;

}

static void ReadWAVE( char *filename, Wave *wave ) {

	int fd = open( filename, O_RDWR );
	RIFFHeader riff_header = ReadRIFFHeader( fd );
	FmtHeader fmt_header = ReadFmtHeader( fd );

	read( fd, &wave->Subchunk2ID, sizeof(uint32_t));
	read( fd, &wave->Subchunk2Size, sizeof(uint32_t));
	fix_endian( &riff_header, &fmt_header, wave );

	ReadSamples( fd, wave );

	close( fd );

}

Wave *WaveNew( char* filename ) {

	Wave *wave = malloc(sizeof(Wave));

	ReadWAVE( filename, wave );

	return wave;

}
