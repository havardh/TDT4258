#include "audio.h"
#include "wave.h"

int main( void ) {

	Audio audio = AudioNew();

	//Sample sample = SampleNew("./data/8k8bitpcm.wav");
	char *sample1 = "./data/sample1.wav";
	char *sample2 = "./data/sample2.wav";

	Play( &audio, sample1 );
	sleep( 2 );
	Play( &audio, sample2 );

	AudioDestroy( &audio );
	return 0;
}
