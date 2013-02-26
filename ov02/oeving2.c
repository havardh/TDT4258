/*****************************************************************************
 * 
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"

volatile avr32_pio_t *piob = &AVR32_PIOB;
volatile avr32_pio_t *pioc = &AVR32_PIOC;

int main(int argc, char *argv[]) {
	initHardware();

	while (1)
		;
	return 0;
}

/* funksjon for å initialisere maskinvaren, må utvides */
void initHardware(void) {
	initIntc();
	initLeds();
	initButtons();
	initAudio();
}

void initIntc(void) {
	set_interrupts_base((void *) AVR32_INTC_ADDRESS);
	init_interrupts();
}

void initButtons(void) {
	register_interrupt(button_isr, AVR32_PIOB_IRQ / 32, AVR32_PIOB_IRQ % 32,
			BUTTONS_INT_LEVEL);
	/* (...) */
}

void initLeds(void) {
	pioc->per = 0xff; // Sets PIOC-PER to 0xFF, activates all PIOC pins
	pioc->oer = 0xff; // Sets PIOC-OER to 0xFF, sets all PIOC pins to output
	/* (...) */
}

void initAudio(void) {
	register_interrupt(abdac_isr, AVR32_ABDAC_IRQ / 32, AVR32_ABDAC_IRQ % 32,
			ABDAC_INT_LEVEL);
	/* (...) */
}

void button_isr(void) {
}

void abdac_isr(void) {
}
