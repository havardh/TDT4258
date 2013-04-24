#include <stdio.h>

int main( void ) {

	int fd1 = fopen( "./test1", "rb" );
	int fd2 = fopen( "./test2", "wb" );

	int c;
	while ( (c = fgetc(fd1)) != EOF ) {
		fputc( c, fd2 );
	}

	close( fd1 );
	close( fd2 );

	return 0;

}
