/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"

struct note_t *tune;
volatile avr32_pio_t *piob = &AVR32_PIOB;
volatile avr32_pio_t *pioc = &AVR32_PIOC;
volatile avr32_abdac_t *dac = &AVR32_ABDAC;

static void sleep( void ) {
	__asm__("sleep 0");
}

int main(int argc, char *argv[]) {
        init_samples();
  	init_tracks();
  	init_sounds();
	init_hardware();

	set_leds(0x01);

	while (1) /* busy wait */
		sleep();

	return 0;
}

/* funksjon for å initialisere maskinvaren, må utvides */
void init_hardware(void) {
	init_intc();
	init_leds();
	init_audio();
	init_buttons();
}

// button_isr
// Bytte datastruktur

//void play_tune()

// 1. Få interrupt ifra abdac
// 2. Skriv rand til abdac
// 3. Still på klokkefrekvens (for interrupt i fra abdac)
// 4. Skriv en datastruktur til abdac
// 5. Skriv tonen A (440 Hz) til abdac.
