CC=avr32-linux-gcc


# Command to upload program to flash
AVR32PROGRAM = avr32program
#-I/usr/src/linux-headers-3.2.0-30/include  -I../linux/include -I../linux/arch/avr32/include
####### RULES ##########################################################
.PHONY : all
all:
	$(CC) -g --std=c99 src/sounds.c src/sample.c src/main.c -Iinclude -o bin/sound_test

.PHONY : clean
clean :
	rm -rf bin/*.o bin/*.elf bin/*.*~
