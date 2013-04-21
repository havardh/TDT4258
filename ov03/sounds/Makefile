CC=avr32-linux-gcc


# Command to upload program to flash
AVR32PROGRAM = avr32program
#-I/usr/src/linux-headers-3.2.0-30/include  -I../linux/include -I../linux/arch/avr32/include
####### RULES ##########################################################
.PHONY : all
all:
	$(CC) -g --std=c99 ../util/src/endian.c src/audio.c src/sample.c src/wave.c src/main.c -I../util/include -Iinclude -o bin/sound_test

.PHONY : clean
clean :
	rm -rf bin/*.o bin/*.elf bin/*.*~
