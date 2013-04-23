#include <linux/input.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <linux/input.h>

#include <asm/io.h>
#include <asm/irq.h>
#include <asm/gpio.h>
#include <asm/system.h>
#include "buttons_driver.h"
#include "../ap7000.h"

volatile avr32_pio_t *btn_pio = &AVR32_PIOB;

static irqreturn_t button_interrupt(int irq, void *dev_id)
{
	printk(KERN_ALERT "int %d: interupt received. Irq number: %d\n", -EBUSY,irq);
	return IRQ_HANDLED;
}

static int __init button_init(void)
{	
	
/*	INIT
	volatile int isr;
	btn_pio->per |= 0xff;
	btn_pio->puer |= 0xff;
	btn_pio->ier |= 0xff;
	isr = btn_pio->isr;
*/	
	printk(KERN_ALERT "Module started\n");
	printk(KERN_ALERT "Requesting GPIO %d\n",AVR32_PIOB_ADDRESS);
	unsigned int GPIO_REQUEST = gpio_request(AVR32_PIOB_ADDRESS, "buttons");
	if (GPIO_REQUEST < 0) {
		printk(KERN_ALERT "\e[00;31merror %d: could not request gpio: %d\n\e[00;m", GPIO_REQUEST,AVR32_PIOB_ADDRESS);
		return GPIO_REQUEST;
	}
	
/*
	int i=0;
	for (i=0; i<65; i++){
		printk(KERN_ALERT "Requesting Irq %d\n",i);
		//flags: 0, SA_INTERRUPT, SA_ONESHOT or SA_PROBE.
		int IRQ_REQUEST = request_irq(i, button_interrupt, 0, "buttons", NULL);
		if (IRQ_REQUEST) {
			printk(KERN_ALERT "\e[00;31merror %d: could not request irq: %d\n\e[00;m", IRQ_REQUEST, i);
			//return IRQ_REQUEST;
		}
	}
*/
	return 0;
} 

static void __exit button_exit(void)
{

	//printk(KERN_ALERT "exit : removing irq: %d\n",AVR32_PIOB_IRQ);
	printk(KERN_ALERT "exit : removing button: %d\n",AVR32_PIOB_ADDRESS);
	//free_irq(AVR32_PIOB_IRQ,  NULL);
	gpio_free(AVR32_PIOB_ADDRESS);
} 


static ssize_t driver_read (struct file *filp, char __user *buff, size_t count, loff_t *offp)
{
    char output;
    if (count == 0)
        return 0;
    output = ~btn_pio->pdsr;
    copy_to_user(buff, &output, 1);
    *offp += 1;
    return 1;
}


module_init(button_init);
module_exit(button_exit);

MODULE_AUTHOR("");
MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");
