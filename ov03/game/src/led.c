#include "button.h"

static int _fd;

static void (*callback) (void) callbacks[8];

void LedInit( void ) {

	_fd = open( DEV_LED, O_RDONLY );

}

void LedDestroy( void ) {

	close( _fd );

}

void LedWrite( uint8_t value ) {

	write( _fd, &value, 1 );

}
