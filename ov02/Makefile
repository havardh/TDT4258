CC=avr32-gcc
CFLAGS=-g -Wall -Iinclude 
LDFLAGS=-g -Wall -pedantic -Llib -lavr32b-interrupts -lm
TARGET=oeving2.elf


# Command to upload program to flash
AVR32PROGRAM = avr32program

####### RULES ##########################################################
.PHONY : all
all: $(TARGET) #git_pull

oeving2.elf: oeving2.o interrupt.o gpio.o samples.o playback.o sounds.o note.o piano.o
	$(CC) $^ -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

git_pull:
	git pull origin master

test: all playback_test.o
	./test

# upload to STK1000 (program flash)
.PHONY : upload
upload : $(TARGET)
	$(AVR32PROGRAM) halt
	sleep 3
	$(AVR32PROGRAM) program -e -f0,8Mb $<

.PHONY : clean
clean :
	rm -rf *.o *.elf *.*~
