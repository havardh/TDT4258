#!/bin/sh
cd ../game
make
scp bin/game avr32@129.241.102.252:~/game
scp data/* avr32@129.241.102.252:~/game/data
