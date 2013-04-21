#include "sample.h"

Sample SampleNew ( char *filename ) {

	Wave *wave = WaveNew( filename );

	Sample sample = {
		.id = wave->Subchunk2ID,
		.size = wave->Subchunk2Size,
		.samples = wave->samples
	};

	return sample;

}
