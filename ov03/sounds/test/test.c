#include <stdio.h>

int main( void ) {

	FILE *fd1 = fopen( "./sound.wav", "rb" );
	FILE *fd2 = fopen( "./test3", "wb" );

	int c;
	while ( (c = fgetc(fd1)) != EOF ) {
		fputc( c, fd2 );
	}

	close( fd1 );
	close( fd2 );

	return 0;

}
