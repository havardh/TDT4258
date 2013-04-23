#include "button.h"
#include <fcntl.h>
#include <stdint.h>

static int _fd;


void LedInit( void ) {

	_fd = open( "", O_RDONLY );

}

void LedDestroy( void ) {

	close( _fd );

}

void LedWrite( uint8_t value ) {

	write( _fd, &value, 1 );

}
