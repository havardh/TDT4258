#include "audio.h"
#include "wave.h"

int main( void ) {

	Audio audio = AudioNew();

	//Sample sample = SampleNew("./data/8k8bitpcm.wav");
	char *sample = "./data/8k8bitpcm.wav";

	Play( &audio, sample );

	AudioDestroy( &audio );
	return 0;
}
