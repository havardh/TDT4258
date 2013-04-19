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

static void fix_endian( BMPHeader *header ) {

  //	header->signature = __builtin_bswap16(header->signature);
  //	header->size	  = __builtin_bswap32(header->size);
  //	header->reserved1 = __builtin_bswap16(header->reserved1);
  //	header->reserved2 = __builtin_bswap16(header->reserved2);
  //	header->offset	  = __builtin_bswap32(header->reserved2);

}

static BMPHeader ReadBMPHeader ( int fd ) {

	BMPHeader header;
	read( fd, &header, sizeof(header));

	if (0)
		fix_endian( &header );


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

static void flip ( char *data, int width, int height ) {

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

	//Size: 230522, Offset: 122
	//Width: 320, Height: 240
	int offset = 122;//bmp_header.offset;
	int size = 244922;//bmp_header.size;
	int width = 320;//dib_header.width;
	int height = 240;//dib_header.height;

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

	for (int y=0; y < height; y++) {
	  for (int x=0; x < width; x++) {
	    ScreenDrawPixel( screen, x, y, &image->pixels[y*width + x]);
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
