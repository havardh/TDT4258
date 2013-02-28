/*****************************************************************************
 *
 * Øving 2 UCSysDes
 *
 *****************************************************************************/

#include "oeving2.h"
#include "interrupt.h"

#define BIT_20				1048576
#define BIT_21				2097152
#define ON 					1

volatile avr32_pio_t *piob = &AVR32_PIOB;
volatile avr32_pio_t *pioc = &AVR32_PIOC;
volatile avr32_abdac_t *dac = &AVR32_ABDAC;
volatile avr32_pm_t *sm = &AVR32_PM;

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
	initAudio();
}

void initIntc(void) {
	set_interrupts_base((void *) AVR32_INTC_ADDRESS);
	
	init_interrupts();
}

void initButtons(void) {
	register_interrupt((__int_handler)(button_isr), 
		AVR32_PIOB_IRQ / 32, AVR32_PIOB_IRQ % 32, BUTTONS_INT_LEVEL);
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
	register_interrupt((__int_handler)(abdac_isr), 
		AVR32_ABDAC_IRQ / 32, AVR32_ABDAC_IRQ % 32, ABDAC_INT_LEVEL);
	
	piob->pdr = BIT_20|BIT_21; 		// Set bit 20 and 21
	piob->asr = BIT_20|BIT_21; 		// Set bit 20 and 21
	
	//sm->gcctrl[6] = /* value */;
	
	dac->CR.en = ON;
	dac->IER.tx_ready = ON;
}


// button_isr
// Bytte datastruktur

// Sett klokke hastighet

void abdac_isr(void) {
	// skriv et tall mellom HIGH og LOW fra en datastruktur til abdac register
}

// 1. Få interrupt ifra abdac
// 2. Skriv rand til abdac
// 3. Still på klokkefrekvens (for interrupt i fra abdac)
// 4. Skriv en datastruktur til abdac
// 5. Skriv tonen A (440 Hz) til abdac.
