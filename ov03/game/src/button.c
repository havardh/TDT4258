#include "button.h"

static int _fd;

static void (*callback) (void) callbacks[8];

void ButtonInit( void ) {

	_fd = open( DEV_BUTTON, O_RDONLY );

}

void ButtonDestroy( void ) {

	close( _fd );

}

void ButtonAddCallback( Button button, void (*callback) (void) ) {

	callbacks[button] = callback;

}

void ButtonPoll( void ) {

	char buttons;
	read( _fd, &buttons, 1);

	switch (buttons) {

	case :
		break;

	}

}
