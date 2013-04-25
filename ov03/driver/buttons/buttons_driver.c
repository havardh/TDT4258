#include <linux/input.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/cdev.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <linux/input.h>

#include <asm/io.h>
#include <asm/irq.h>
#include <asm/gpio.h>
#include <asm/uaccess.h>
#include <asm/system.h>
#include "buttons_driver.h"
#include "../ap7000.h"

volatile avr32_pio_t *piob = &AVR32_PIOB;

int buttons_major =   0;
int buttons_minor =   0;

static struct file_operations buttons_fops = {
	.owner = THIS_MODULE,
	.open = open_buttons,
	.write = write_buttons,
	.read = read_buttons,
	.release = release_buttons
};

static int __init button_init(void)
{	
	int mem_quantum = sizeof( avr32_pio_t );
	int result;
	dev_t dev;
	
	printk ( KERN_INFO "Loading driver...\n" );
	
	if ( buttons_major ) {
		dev = MKDEV ( buttons_major, buttons_minor );
		result = register_chrdev_region ( dev, NUM_DEVICES, "buttons" );
	} else {
		result = alloc_chrdev_region ( &dev, buttons_minor, NUM_DEVICES, "buttons" );
		buttons_major = MAJOR ( dev );
	}
	
	if ( result < 0 ) {
		printk ( KERN_WARNING "buttons: can't get major %d\n", buttons_major );
		return result;
	}
	
	// Build dev_t data item
	dev = MKDEV ( buttons_major, buttons_minor );
	printk( KERN_WARNING "devno:%d major:%d minor:%d\n", dev, buttons_major, buttons_minor );
	// printk ( KERN_INFO "requesting region a of %dB\n", n );
	
	result = (int) request_region ( AVR32_PIOB_ADDRESS, mem_quantum, "buttons" );
	
	if ( result < 0 ) {
		printk( KERN_WARNING "Result %d: Could not request region at PIOB\n", result );

		return -ENODEV;
	}
	
	/*
	printk(KERN_ALERT "Requesting GPIO %d\n",AVR32_PIOB_ADDRESS);
	unsigned int result = gpio_request(AVR32_PIOB_ADDRESS, "buttons");
	if (result < 0) {
		printk(KERN_ALERT "error %d: could not request gpio: %d\n", result,AVR32_PIOB_ADDRESS);
		return result;
	}
	 */
	
	// Initialize the buttons

	piob->per |= 0xff00;
	piob->puer |= 0xff00;
	//piob->ier = 0xff;

	
	/*
	printk(KERN_ALERT "Requesting Irq %d\n",AVR32_PIOB_IRQ);
	//flags: 0, SA_INTERRUPT, SA_ONESHOT or SA_PROBE.
	int IRQ_REQUEST = request_irq(AVR32_PIOB_IRQ, button_interrupt, 0, "buttons", NULL);
	if (IRQ_REQUEST) {
		printk(KERN_ALERT "error %d: could not request irq: %d\n", IRQ_REQUEST, AVR32_PIOB_IRQ);
		return IRQ_REQUEST;
	}
	*/
	
//START
	// Set up char_dev structure for the device
	struct cdev *char_dev = cdev_alloc ();
	cdev_init ( char_dev, &buttons_fops );
	char_dev->owner = THIS_MODULE;
	char_dev->ops = &buttons_fops;
	int error = cdev_add (char_dev, dev, 1);
	if ( error )
		printk ( KERN_WARNING "Error code:%d while adding buttons\n", error );
	printk ( KERN_INFO "Buttons initialized\n" );
//STOP
	
	return 0;
} 

static void __exit button_exit(void)
{

	//printk(KERN_ALERT "exit : removing irq: %d\n",AVR32_PIOB_IRQ);
	printk(KERN_ALERT "exit : removing button: %d\n",AVR32_PIOB_ADDRESS);
	//free_irq(AVR32_PIOB_IRQ,  NULL);
	gpio_free(AVR32_PIOB_ADDRESS);
	
//START
	int mem_quantum = sizeof( avr32_pio_t );
	piob->per &= 0x00ff;
	piob->puer &= 0x00ff;
	release_region ( AVR32_PIOB_ADDRESS, mem_quantum );
	// unregister_chrdev_region ( dev, NUM_DEVICES );
	printk ( KERN_INFO "Buttons unloaded\n" );
//STOP
} 

static ssize_t open_buttons( struct inode *inode, struct file *filp ) { return 0; }
static ssize_t release_buttons( struct inode *inode, struct file *filp ) { return 0; }
static ssize_t write_buttons ( struct file *filp, char __user *buff, size_t count, loff_t *offp ) { return 0; }

static irqreturn_t button_interrupt(int irq, void *dev_id)
{
	printk(KERN_ALERT "int %d: interupt received. Irq number: %d\n", -EBUSY,AVR32_PIOB_IRQ);
	return IRQ_HANDLED;
}

static ssize_t read_buttons (struct file *filp, char __user *buff, size_t count, loff_t *offp)
{
	int output;
	if (count == 0)
        	return 0;
    	output = ~piob->pdsr;

	char *p = &output;

	char res = 0;
	if (p[2] & 1) {
		res |= 1;
	} 
	if (p[2] & 2){
		res |= 2;
	}
	 if (p[2] & 4){
		res |= 4;
	} 
	if (p[2] & 32){
		res |= 8;
	} 
	if (p[2] & 64){
		res |= 16;
	} 
	if (p[2] & 128){
		res |= 32;
	} 
	if (p[1] & 1){
		res |= 64;
	} 
	if (p[0] & 64){
		res |= 128;
	}

	copy_to_user(buff, &res, 1);
	*offp += 1;
	return 1;
}


module_init(button_init);
module_exit(button_exit);

//MODULE_AUTHOR("");
//MODULE_DESCRIPTION("");
MODULE_LICENSE("Dual BSD/GPL");
