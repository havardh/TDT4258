#include "button.h"
#include <stdint.h>
#include <fcntl.h>

static int _fd;

//static void (*callbacks) (void)[8];

void ButtonInit( void ) {

	_fd = open( "/dev/buttons", O_RDONLY );

}

void ButtonDestroy( void ) {

	close( _fd );

}

void ButtonAddCallback( Button button, void (*callback) (void) ) {

  //	callbacks[button] = callback;

}

void ButtonPoll( void ) {

  	uint8_t buttons;
	read( _fd, &buttons, 1);
        
        printf("%d\n", buttons);
/*
	switch (buttons) {

	case 1:	  callbacks[0]; break;
	case 2:	  callbacks[1]; break;
	case 4:	  callbacks[2]; break;
	case 8:	  callbacks[3]; break;
	case 16:  callbacks[4]; break;
	case 32:  callbacks[5]; break;
	case 64:  callbacks[6]; break;
	case 128: callbakcs[7]; break;

	}*/

}
