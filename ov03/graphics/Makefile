CC=avr32-gcc
CFLAGS=-g -Wall -Iinclude -O1
LDFLAGS=-g -Wall -pedantic -Llib -lavr32b-interrupts -lm
TARGET=oeving2.elf


# Command to upload program to flash
AVR32PROGRAM = avr32program
#-I/usr/src/linux-headers-3.2.0-30/include
####### RULES ##########################################################
.PHONY : all
all:
	gcc -g --std=c99 src/line.c src/canvas.c src/shape.c src/main.c src/screen.c -Iinclude -o bin/canvas_test

.PHONY : clean
clean :
	rm -rf bin/*.o bin/*.elf bin/*.*~
