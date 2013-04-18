CC=gcc #avr32-linux-gcc
CFLAGS=-g -Wall -Iinclude -O1
LDFLAGS=-g -Wall -pedantic -Llib -lavr32b-interrupts -lm
TARGET=oeving2.elf

IP=129.241.103.252

# Command to upload program to flash
AVR32PROGRAM = avr32program
#-I/usr/src/linux-headers-3.2.0-30/include  -I../linux/include -I../linux/arch/avr32/include
####### RULES ##########################################################
.PHONY : all
all:
	$(CC) -g --std=c99 src/image.c src/bitmap.c src/rectangle.c src/pixel.c src/line.c src/canvas.c src/shape.c src/main.c src/screen.c -Iinclude -o bin/canvas_test

upload:
	scp bin/canvas_test avr32@${IP}:~/home/avr32/project/graphics

.PHONY : clean
clean :
	rm -rf bin/*.o bin/*.elf bin/*.*~
