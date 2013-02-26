/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"
#include "interrupt.h"

volatile avr32_pio_t *piob = &AVR32_PIOB;
volatile avr32_pio_t *pioc = &AVR32_PIOC;
int LED_VALUE;

int main(int argc, char *argv[]) {
	initHardware();

	LED_VALUE = 0x8;
	update_leds();

	while (1) update_leds() ;
	return 0;
}

void update_leds(void) {
	// Turn off lights
	pioc->codr = 0xFF;

	// Turn on lights
	pioc->sodr = LED_VALUE;
}

/* funksjon for å initialisere maskinvaren, må utvides */
void initHardware(void) {
	initIntc();
	initLeds();
	initButtons();
	//initAudio();
	//initAudio();
}

void initIntc(void) {
	set_interrupts_base((void *) AVR32_INTC_ADDRESS);
	register_interrupt((__int_handler)(button_isr), AVR32_PIOB_IRQ / 32, AVR32_PIOB_IRQ % 32, BUTTONS_INT_LEVEL);
	init_interrupts();
}

void initButtons(void) {
	piob->per = 0xff;
	piob->ier = 0xff;
	piob->puer = 0xff;

}

void initLeds(void) {
	pioc->per = 0xff; // Sets PIOC-PER to 0xFF, activates all PIOC pins
	pioc->oer = 0xff; // Sets PIOC-OER to 0xFF, sets all PIOC pins to output
	/* (...) */
}

void initAudio(void) {
	register_interrupt(abdac_isr, AVR32_ABDAC_IRQ / 32, AVR32_ABDAC_IRQ % 32, ABDAC_INT_LEVEL);
	/* (...) */
}

void abdac_isr(void) {
}
