CC=avr32-gcc
CFLAGS=-g -Wall -Iinclude
LDFLAGS=-g -Wall -pedantic -Llib -lavr32b-interrupts -lm
TARGET=oeving2.elf


# Command to upload program to flash
AVR32PROGRAM = avr32program

####### RULES ##########################################################
.PHONY : all
all: $(TARGET) git_pull

oeving2.elf: oeving2.o interrupt.o gpio.o samples.o tunes.o
	$(CC) $^ -o $@ $(LDFLAGS)

samples.o: samples.c
	$(CC) $(CFLAGS) -c $< -o $@

gpio.o: gpio.c
	$(CC) $(CFLAGS) -c $< -o $@

tunes.o: tunes.c
	$(CC) $(CFLAGS) -c $< -o $@

interrupt.o: interrupt.c
	$(CC) $(CFLAGS) -c $< -o $@

oeving2.o: oeving2.c
	$(CC) $(CFLAGS) -c $< -o $@

git_pull:
	git pull origin master

# upload to STK1000 (program flash)
.PHONY : upload
upload : $(TARGET)
	$(AVR32PROGRAM) halt
	sleep 3
	$(AVR32PROGRAM) program -e -f0,8Mb $<

.PHONY : clean
clean :
	rm -rf *.o *.elf *.*~
