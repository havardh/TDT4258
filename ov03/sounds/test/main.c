#include "audio.h"
#include "wave.h"

int main( void ) {

	//Sample sample = SampleNew("./data/8k8bitpcm.wav");
	char *sample1 = "./data/sample1.wav";
	char *sample2 = "./data/sample2.wav";

	AudioPlay( sample1 );
	sleep( 2 );
	AudioPlay( sample2 );

	return 0;
}
