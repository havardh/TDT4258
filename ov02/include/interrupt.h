#ifndef INTERRUPT_H
#define INTERRUPT_H

#include <avr32/ap7000.h>
#include <sys/interrupts.h>
#include <stdint.h>
#include "oeving2.h"
#include "samples.h"
#include "playback.h"
#include "tone.h"
#include "sounds.h"
#include "gpio.h"
#include "piano.h"

extern volatile avr32_pio_t *piob;
extern volatile avr32_pio_t *pioc;
extern volatile avr32_abdac_t *dac;

extern uint8_t button_status;
extern int playing;
extern int16_t sine_table[SAMPLES];

__int_handler * button_isr(void);
__int_handler *abdac_isr( void );

#define SW0 0x1
#define SW1 0x2
#define SW2 0x4
#define SW3 0x8
#define SW4 0x10
#define SW5 0x20
#define SW6 0x40
#define SW7 0x80

#endif
