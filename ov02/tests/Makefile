CC=gcc
CFLAGS=-g -Wall -I../include
LDFLAGS=-g

SRC=..

.PHONY: all
all: $(SRC)/note.o $(SRC)/playback.o $(SRC)/samples.o playback_test.o asserts.o run_tests.o
	$(CC) $^ -o test.elf $(LDFLAGS)

tests: all
	./test.elf

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf *.o *.elf *.*~
