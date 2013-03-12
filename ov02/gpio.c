#include "gpio.h"


/* Initialize Hardware */

void init_intc(void) {
	set_interrupts_base((void *) AVR32_INTC_ADDRESS);
	init_interrupts();
}


void init_buttons(void) {
	register_interrupt((__int_handler)(button_isr),
			   AVR32_PIOB_IRQ / 32, AVR32_PIOB_IRQ % 32, BUTTONS_INT_LEVEL);
	piob->per = 0xff;
	piob->ier = 0xff;
	piob->puer = 0xff;

}

void init_leds(void) {
	pioc->per = 0xff; // Sets PIOC-PER to 0xFF, activates all PIOC pins
	pioc->oer = 0xff; // Sets PIOC-OER to 0xFF, sets all PIOC pins to output
	/* (...) */
}

void init_audio(void) {
	// Register interrupt handler
	register_interrupt((__int_handler)(abdac_isr),
			   AVR32_ABDAC_IRQ / 32, AVR32_ABDAC_IRQ % 32, ABDAC_INT_LEVEL);

	// Disable PIO
	piob->PDR.p20 = 1;
	piob->PDR.p21 = 1;

	// Enable ABDAC
	piob->ASR.p20 = 1;
	piob->ASR.p21 = 1;

	// Set the clock to use Oscillator (OSC0 and OSC1 is 20MHz and 12MHz)
	volatile avr32_pm_t *sm = &AVR32_PM;
	volatile avr32_pm_gcctrl_t *clock = &sm->gcctrl[6];

	clock->oscsel = 0; // OSC0 = 20MHz, gir 20 MHz / 256 = 81.920 kHz
	clock->pllsel = 0;
	clock->cen = ON;

	// Turn on DAC
	turn_on_abdac();
}

void turn_on_abdac( void ) {
	dac->CR.en = ON;
	dac->IER.tx_ready = ON;
}

void turn_off_abdac( void ) {
	dac->CR.en = OFF;
	dac->IER.tx_ready = OFF;
}

void set_dac_sample(int16_t sound) {
	dac->SDR.channel0 = sound;
	dac->SDR.channel1 = sound;
}

/* Get and Set LEDs */

uint8_t get_leds ( void ) {
	return led_value;
}

void set_leds( uint8_t leds ) {
	// Turn off lights
	pioc->codr = 0xFF;

	// Turn on lights
	pioc->sodr = leds;

	// Cache led value
	led_value = leds;
}
