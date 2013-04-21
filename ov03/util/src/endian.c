#include "endian.h"

void swap (uint8_t *a, uint8_t *b) {
	uint8_t t = *a;
	*a = *b;
	*b = t;
}

uint16_t endian_convert_uint16_t( uint16_t* val ) {
	uint8_t *p = (uint8_t*) val;
	swap( &p[0], &p[1] );
}

uint32_t endian_convert_uint32_t( uint32_t* val ) {
	uint8_t *p = (uint8_t*) val;
	swap( &p[0], &p[3] );
	swap( &p[1], &p[2] );
}
