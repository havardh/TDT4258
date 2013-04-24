#include <stdio.h>
#include <fcntl.h>
#include <stdint.h>

void ButtonInit( void );
void ButtonDestroy( void );
void ButtonWrite( uint8_t );

static int button_fd;

int main() {

	ButtonInit();

	char c;
	while( read( button_fd, &c, 1 ) ) {
		printf("%d\n", c);
	}

	ButtonDestroy();

	return 0;
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
