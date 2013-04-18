#include "sounds.h"

int main( void ) {

	Audio audio = AudioNew();

	Play( &audio, NULL );

	AudioDestroy( &audio );
	return 0;
}
