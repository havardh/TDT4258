#include "bitmap.h"
#include "fcntl.h"

static void swap (char *a, char *b) {
	char t = *a;
	*a = *b;
	*b = t;
}

static void fix_endian( BMPHeader *header ) {

	char *p;

	p = (char*) &header->signature;
	swap( &p[0], &p[1] );

	p = (char*) &header->size;
	swap( &p[0], &p[3] );
	swap( &p[1], &p[2] );

	p = (char*) &header->reserved1;
	swap( &p[0], &p[1] );

	p = (char*) &header->reserved1;
	swap( &p[0], &p[1] );

	p = (char*) &header->offset;
	swap( &p[0], &p[3] );
	swap( &p[1], &p[2] );

}

static BMPHeader ReadBMPHeader ( int fd ) {

	BMPHeader header;
	read( fd, &header, sizeof(header));

#ifdef TARGET_OS_MAC
	fix_endian( &header );
#endif //
	return header;
}

static DIBHeader ReadDIBHeader ( int fd ) {

	DIBHeader header;
	read( fd, &header, sizeof(header));
	return header;
}

static void swapLine ( void *a, void *b, int width ) {

	void *tmp = malloc(width);
	memcpy(a, tmp, width);
	memcpy(a, b, width);
	memcpy(tmp, b, width);

}

static void flip ( void *data, int width, int height ) {

	for (int i=0, j=(width*height)-width; i < (width*height)/2; i += width, j -= width) {

		swapLine( &data[i], &data[j], width );

	}

}

static void ReadBMP ( char* filename, Bitmap* bmp ) {


	int fd = open( filename, O_RDWR );

	BMPHeader bmp_header = ReadBMPHeader( fd );
	printf("Size: %d, Offset: %d\n", bmp_header.size, bmp_header.offset);
	DIBHeader dib_header = ReadDIBHeader( fd );
	printf("Width: %d, Height: %d\n", dib_header.width, dib_header.height);

	uint8_t buffer[BUFFER_SIZE];

	int offset = bmp_header.offset;
	int size = bmp_header.size;
	int width = dib_header.width;
	int height = dib_header.height;

	// Read pixels
	lseek( fd, offset, SEEK_SET);
	void *data = malloc(size);
	uint8_t *ptr = (uint8_t*)data;
	for (int i=0; i < size / BUFFER_SIZE; i++ ) {
		read( fd, buffer, BUFFER_SIZE );

		for (int i=0; i<BUFFER_SIZE; i++) {
			(*ptr++) = buffer[i];
		}

	}

	close( fd );

	flip( data, width, height );

	bmp->width = width;
	bmp->height = height;
	bmp->pixels = data;
}

static void paint ( void *shape, Screen *screen ) {

	Bitmap *image = (Bitmap*) shape;

	int width = image->width;
	int height = image->height;

	for (int x=0; x < width; x++) {
		for (int y=0; y < height; y++) {

			ScreenDrawPixel( screen, x, y, &image->pixels[y*width + x]);
		}
	}

}

Bitmap BitmapNew( char* filename ) {

	Bitmap bmp = {
		.parent = NULL,
		.paint = &paint
	};
	ReadBMP( filename, &bmp );

	int size = bmp.width * bmp.height;

	/*for (int i=0; i<2000; i++) {
		PixelPrint( &bmp.pixels[i] );
	}*/


	return bmp;
}
