//#include "audio.h"
#include "wave.h"

int main( void ) {

	//Audio audio = AudioNew();

	Wave *wave = WaveNew("./data/8k8bitpcm.wav");

	//Play( &audio, NULL );

	//AudioDestroy( &audio );
	return 0;
}
