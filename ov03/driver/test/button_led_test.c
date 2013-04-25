#include <stdio.h>
#include <fcntl.h>
#include <stdint.h>

void LedInit( void );
void LedDestroy( void );
void LedWrite( uint8_t );

void ButtonInit( void );
void ButtonDestroy( void );
void ButtonWrite( uint8_t );

static int led_fd;
static int button_fd;

int main() {

	LedInit();
	ButtonInit();

	char c;
	while( read( button_fd, &c, 1 ) ) {
		write( led_fd, &c, 1);
	}

	ButtonDestroy();
	LedDestroy();

	return 0;
}

void LedInit( void ) {

	led_fd = open( "/dev/leds", O_WRONLY );

}

void LedDestroy( void ) {

	close( led_fd );

}

void LedWrite( uint8_t value ) {

	write( led_fd, &value, 1 );

}


void ButtonInit( void ) {

	button_fd = open( "/dev/buttons", O_RDONLY );

}

void ButtonDestroy( void ) {

	close( button_fd );

}

void ButtonWrite( uint8_t value ) {

	write( button_fd, &value, 1 );

}
