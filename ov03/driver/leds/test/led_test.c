#include <stdio.h>
#include <fcntl.h>
#include <stdint.h>

void LedInit( void );
void LedDestroy( void );
void LedWrite( uint8_t );

static int _fd;

int main() {

	LedInit();
	LedWrite ( 0xff );
	sleep(1);
	LedWrite ( 0 );
	sleep(1);
	LedWrite ( 1 );
	sleep(1);
	LedWrite ( 2 );
	sleep(1);
	LedWrite ( 4 );
	sleep(1);
	LedWrite ( 8 );
	sleep(1);
	LedWrite ( 16 );
	sleep(1);
	LedWrite ( 32 );
	sleep(1);
	LedWrite ( 64 );
	sleep(1);
	LedWrite ( 128 );
	sleep(1);
	LedDestroy();

	return 0;
}

void LedInit( void ) {

	_fd = open( "/dev/leds", O_WRONLY );

}

void LedDestroy( void ) {

	close( _fd );

}

void LedWrite( uint8_t value ) {

	write( _fd, &value, 1 );

}
