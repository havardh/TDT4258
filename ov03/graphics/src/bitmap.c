#include "bitmap.h"
#include "fcntl.h"

static void swap (char *a, char *b) {
	char t = *a;
	*a = *b;
	*b = t;
}

static inline unsigned short __builtin_bswap16(unsigned short a)
{
  return (a<<8)|(a>>8);
}

static void fix_endian( BMPHeader *bmp_header, DIBHeader *dib_header ) {

  char *p;

  // BMP header
  p = (char*) &bmp_header->signature;
  swap( &p[0], &p[1] );

  p = (char*) &bmp_header->size;
  swap( &p[0], &p[3] );
  swap( &p[1], &p[2] );

  p = (char*) &bmp_header->reserved1;
  swap( &p[0], &p[1] );

  p = (char*) &bmp_header->reserved1;
  swap( &p[0], &p[1] );

  p = (char*) &bmp_header->offset;
  swap( &p[0], &p[3] );
  swap( &p[1], &p[2] );

  // DIB header
  p = (char*) &dib_header->size;
  swap( &p[0], &p[3] );
  swap( &p[1], &p[2] );

  p = (char*) &dib_header->width;
  swap( &p[0], &p[3] );
  swap( &p[1], &p[2] );

  p = (char*) &dib_header->height;
  swap( &p[0], &p[3] );
  swap( &p[1], &p[2] );

}

static BMPHeader ReadBMPHeader ( int fd ) {

	BMPHeader header;
	read( fd, &header, sizeof(header));

	return header;
}

static DIBHeader ReadDIBHeader ( int fd ) {

	DIBHeader header;
	read( fd, &header, sizeof(header));
	return header;
}

static void swapLine ( uint8_t *a, uint8_t *b, int width ) {

	for (int i=0; i<width; i++) {
		swap(&a[i], &b[i]);
	}

}

static void flip ( uint8_t *data, int width, int height ) {

	for (int i=0, j=height-1 ; i < height/2; i += 1, j -= 1) {
		swapLine( &data[i*width*3], &data[j*width*3], width*3 );

	}

}

static void ReadBMP ( char* filename, Bitmap* bmp ) {

	printf("Reading: %s\n", filename);

	int fd = open( filename, O_RDWR );
	BMPHeader bmp_header = ReadBMPHeader( fd );
	DIBHeader dib_header = ReadDIBHeader( fd );
	uint8_t buffer[BUFFER_SIZE];

#ifndef __APPLE__
	fix_endian( &bmp_header, &dib_header );
#endif
	int offset = bmp_header.offset;
	int size = bmp_header.size;
	int width = dib_header.width;
	int height = dib_header.height;

	printf("Size: %d, Offset: %d\n", size, offset);
	printf("Width: %d, Height: %d\n", width, height);


	// Read pixels
	lseek( fd, offset, SEEK_SET);
	uint8_t *data = malloc(size);
	uint8_t *ptr = (uint8_t*)data;

	for (int i=0; i < (size - offset) / BUFFER_SIZE; i++ ) {
		read( fd, buffer, BUFFER_SIZE );

		for (int i=0; i<BUFFER_SIZE; i++) {
			(*ptr++) = buffer[i];
		}
	}

	int remaining = (size - offset) % BUFFER_SIZE;
	if (remaining) {
		read( fd, buffer, remaining);

		for (int i=0; i<remaining; i++) {

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

	for (int y=0; y < height; y++) {
		for (int x=0; x < width; x++) {
			Pixel *p = &image->pixels[y*width + x];
			ScreenDrawPixel( screen, x, y, p);
		}
	}
}

Bitmap *BitmapNew( char* filename ) {

	Bitmap *bmp = malloc(sizeof(Bitmap));
	bmp->parent = NULL;
	bmp->paint = &paint;
	ReadBMP( filename, bmp );
	return bmp;
}
