CC=avr32-linux-gcc

include=-Iinclude\
	-I../graphics/include\
	-I../sounds/include\
	-I../util/include

sources=src/*.c\
	../graphics/src/*.c\
	../sounds/src/*.c\
	../util/src/*.c

.PHONY: all

all:
	$(CC) -g --std=c99 $(sources) $(include) -lpthread -o bin/game

.PHONY: clean
clean:
	rm -rf bin/*
