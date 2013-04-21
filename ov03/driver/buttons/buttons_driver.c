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
#include <asm/arch/at32ap7000.h>

#define BUTTON_PIN GPIO_PIN_PB(25)
#define BUTTON_IRQ  gpio_to_irq(BUTTON_PIN)

static irqreturn_t button_interrupt(int irq, void *dev_id)
{
	printk(KERN_ALERT "int %d: interupt received. Irq number: %d\n", -EBUSY,BUTTON_PIN);
	return IRQ_HANDLED;
}

static int __init button_init(void)
{
	unsigned int ret;
	
	printk(KERN_ALERT "Module started\n");
	printk(KERN_ALERT "Requesting GPIO %d\n",BUTTON_PIN);
	printk(KERN_ALERT "Requesting Irq %d\n",BUTTON_IRQ);
	
	ret = gpio_request(BUTTON_PIN, "blah");
	if (ret < 0) {
		printk(KERN_ALERT "error %d: could not request gpio: %d\n", ret,BUTTON_PIN);
		return ret;
	}
	
	if (request_irq(BUTTON_IRQ, button_interrupt, 0, "button", NULL)) {
		printk(KERN_ALERT "error %d: could not request irq: %d\n", -EBUSY,BUTTON_PORT);
		return -EBUSY;
	}
	
	return 0;
} 

static void __exit button_exit(void)
{
	printk(KERN_ALERT "exit : removing irq: %d\n",BUTTON_IRQ);
	printk(KERN_ALERT "exit : removing button: %d\n",BUTTON_PIN);
	free_irq(BUTTON_IRQ,  NULL);
	gpio_free(BUTTON_PIN);
} 

module_init(button_init);
module_exit(button_exit);

MODULE_AUTHOR("");
MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");