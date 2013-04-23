#ifndef READFILE_H
#define READFILE_H

#include <stdint.h>

#define BUFFER_SIZE 1024

uint8_t read_file( int fd, int start, int size );

#endif // READFILE_H
