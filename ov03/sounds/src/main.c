#include "sounds.h"

int main( void ) {

	Sounds sound = SoundNew();

	Play( &sound, NULL );

	SoundDestroy( &sound );
	return 0;
}
