#ifndef ENDIAN_H
#define ENDIAN_H

#include <stdint.h>

void swap( uint8_t*, uint8_t* );

uint16_t endian_convert_uint16_t(uint16_t*);
uint32_t endian_convert_uint32_t(uint32_t*);

#endif // ENDIAN_H
