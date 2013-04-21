#ifndef WAVE_H
#define WAVE_H

#include <stdint.h>

// https://ccrma.stanford.edu/courses/422/projects/WaveFormat/

typedef struct {

	uint32_t ChunkID;
	uint32_t ChunkSize;
	uint32_t Format;

} RIFFHeader;

typedef struct {

	uint32_t Subchunk1ID;
	uint32_t Subchunk1Size;
	uint16_t AudioFormat;
	uint16_t NumChannels;
	uint32_t SampleRate;
	uint32_t ByteRate;
	uint16_t BlockAlign;
	uint16_t BitsPerSample;

} FmtHeader;

typedef struct {

	uint32_t Subchunk2ID;
	uint32_t Subchunk2Size;
	uint8_t* samples;

} Wave;

Wave WaveNew( char* filename );

#endif // WAVE_H
