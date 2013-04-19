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

	// Size: 230522, Offset: 122
	// Width: 320, Height: 240
	// Size: 244922, Offset: 122
	// Width: 340, Height: 240
	/*
	int offset = bmp_header.offset;
	int size = bmp_header.size;
	int width = dib_header.width;
	int height = dib_header.height;
	*/
	int offset = 122;
	int size = 244922;
	int width = 340;
	int height = 240;

	printf("Size: %d, Offset: %d\n", size, offset);
        printf("Width: %d, Height: %d\n", width, height);

	// Read pixels
	lseek( fd, offset, SEEK_SET);
	uint8_t *data = malloc(size);
	uint8_t *ptr = (uint8_t*)data;

	for (int i=0; i < (size - offset) / BUFFER_SIZE; i++ ) {
		read( fd, buffer, BUFFER_SIZE );

		for (int i=0; i<BUFFER_SIZE; i++) {
			printf("%d ", buffer[i]);
			(*ptr++) = buffer[i];
		}
                exit(0);
		//printf("\n");

	}

	int remaining = (size - offset) % BUFFER_SIZE;
	if (remaining) {
		read( fd, buffer, remaining);

		for (int i=0; i<remaining; i++) {

			(*ptr++) = buffer[i];
		}
	}

	close( fd );

	/*for(int i=0; i<(size - offset); i++) {


		if (i % 3 == 0) {
			if (i != 0) { printf(") "); }
		if (i % 12 == 0) {
			printf("\n");
		}
			printf("(");
		}
		printf("%d ", data[i]);
	}
	printf(")\n");*/

	flip( data, width, height );


	/*for(int i=0; i<size - offset; i++) {


		if (i % 3 == 0) {
			if (i != 0) { printf(") "); }
		if (i % 12 == 0) {
			printf("\n");
		}
			printf("(");
		}
		printf("%d ", data[i]);
	}
	printf(")\n");*/

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
			PixelPrint(p);
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
