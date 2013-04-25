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

#define IRQ 8
#define DEVNAME "buttons"

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
		result = register_chrdev_region ( dev, NUM_DEVICES, DEVNAME );
	} else {
		result = alloc_chrdev_region ( &dev, buttons_minor, NUM_DEVICES, DEVNAME );
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
	
	/** POLLING
	result = (int) request_region ( AVR32_PIOB_ADDRESS, mem_quantum, DEVNAME );
	
	if ( result < 0 ) {
		printk( KERN_WARNING "Result %d: Could not request region at PIOB\n", result );

		return -ENODEV;
	}
	*/
	
	//INTERRUPTS
	//For each button pin...
	int pin;
	for (pin = AVR32_PIOB_ADDRESS; pin < AVR32_PIOB_PIOB_LINES + 8; pin++) {
		//Request gpio
		result = gpio_request(pin, DEVNAME);
		if (result < 0) {
			printk(KERN_ALERT "error %d: could not request gpio: %d\n", result,pin);
			return result;
		}
		
		// Request IRQ
		result = request_irq(gpio_to_irq(pin), button_interrupt, 0, DEVNAME, NULL);
		if (result){
			printk(KERN_ALERT "error %d: could not request irq: %d\n", result, gpio_to_irq(pin));
			return result;
		}
	}
	
	// Initialize the buttons
	piob->per |= 0xff00;
	piob->puer |= 0xff00;
	//piob->ier = 0xff;
	
	// Set up char_dev structure for the device
	struct cdev *char_dev = cdev_alloc ();
	cdev_init ( char_dev, &buttons_fops );
	char_dev->owner = THIS_MODULE;
	char_dev->ops = &buttons_fops;
	int error = cdev_add (char_dev, dev, 1);
	if ( error )
		printk ( KERN_WARNING "Error code:%d while adding buttons\n", error );
	printk ( KERN_INFO "Buttons initialized\n" );
	
	return 0;
} 

static void __exit button_exit(void)
{
	int pin;
	for (pin = AVR32_PIOB_ADDRESS; pin < AVR32_PIOB_PIOB_LINES + 8; pin++) {
		printk(KERN_ALERT "exit : removing irq: %d\n",IRQ);
		free_irq(gpio_to_irq(pin),  NULL);
		printk(KERN_ALERT "exit : removing button: %d\n",AVR32_PIOB_ADDRESS);
		gpio_free(pin);
	}

	piob->per &= 0x00ff;
	piob->puer &= 0x00ff;

		/*POLLING
	int mem_quantum = sizeof( avr32_pio_t );
	release_region ( AVR32_PIOB_ADDRESS, mem_quantum );
	// unregister_chrdev_region ( dev, NUM_DEVICES );
		 */
	printk ( KERN_INFO "Buttons unloaded\n" );
//STOP
} 

static ssize_t open_buttons( struct inode *inode, struct file *filp ) { return 0; }
static ssize_t release_buttons( struct inode *inode, struct file *filp ) { return 0; }
static ssize_t write_buttons ( struct file *filp, char __user *buff, size_t count, loff_t *offp ) { return 0; }

static irqreturn_t button_interrupt(int irq, void *dev_id)
{
	printk(KERN_ALERT "int %d: interupt received. Irq number: %d\n", -EBUSY,IRQ);
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
