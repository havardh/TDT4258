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
#include "./ap7000.h"

static irqreturn_t button_interrupt(int irq, void *dev_id)
{
	printk(KERN_ALERT "int %d: interupt received. Irq number: %d\n", -EBUSY,AVR32_PIOB_IRQ);
	return IRQ_HANDLED;
}

static int __init button_init(void)
{
	unsigned int ret;
	
	printk(KERN_ALERT "Module started\n");
	printk(KERN_ALERT "Requesting GPIO %d\n",AVR32_PIOB_ADDRESS);
	printk(KERN_ALERT "Requesting Irq %d\n",AVR32_PIOB_IRQ);
	
	ret = gpio_request(AVR32_PIOB_ADDRESS, "buttons");
	if (ret < 0) {
		printk(KERN_ALERT "error %d: could not request gpio: %d\n", ret,AVR32_PIOB_ADDRESS);
		return ret;
	}
	
	if (request_irq(AVR32_PIOB_IRQ, button_interrupt, 0, "buttons", NULL)) {
		//TODO: 0xff = bitmap for interrupt?
		printk(KERN_ALERT "error %d: could not request irq: %d\n", -EBUSY,0xff);
		return -EBUSY;
	}
	
	return 0;
} 

static void __exit button_exit(void)
{
	printk(KERN_ALERT "exit : removing irq: %d\n",AVR32_PIOB_IRQ);
	printk(KERN_ALERT "exit : removing button: %d\n",AVR32_PIOB_ADDRESS);
	free_irq(AVR32_PIOB_IRQ,  NULL);
	gpio_free(AVR32_PIOB_ADDRESS);
} 

module_init(button_init);
module_exit(button_exit);

//MODULE_AUTHOR("");
//MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");