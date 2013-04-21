#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/ioport.h>
#include <asm/io.h>
#include <asm/uaccess.h>

#include "../ap7000.h"
#include "leds_driver.h"

MODULE_LICENSE("Dual BSD/GPL");

int leds_major =   0;
int leds_minor =   0;
int leds_quantum = 0;

volatile avr32_pio_t *piob = &AVR32_PIOB;

dev_t dev;
struct leds_dev *leds_device;

static struct file_operations led_fops = {
	.owner = THIS_MODULE,
	.open = open_leds,
	.write = write_leds,
	.read = read_leds,
	.release = release_leds
};

static void open_leds( struct inode *inode, struct file *filp ) {
	return 0;
}
static void read_leds( struct file *filp, char __user *buff, 
		size_t count, loff_t *offp ) {
	return 0;
}
static void release_leds( struct inode *inode, struct file *filp ) {
	return 0;
}

ssize_t void write_leds ( struct file *filp, char __user *buff, 
		size_t count, loff_t *offp ) {
	// volatile avr32_pio_t *piob = &AVR32_PIOB;
	printk( KERN_INFO "Lighting leds: %s", buff );
	if ( strlen( buff ) == 1 ) {
		piob->codr = 0xff;
		piob->sodr = buff[0] & piob->codr;
		printk ( KERN_INFO "Leds written successfully!\n" );
		return 1; // Successfully written 1 byte
	}
	printk ( KERN_WARNING "Unsuccessful write!\n" );
	return 0;
}

static int __init leds_init ( void ) {
	printk ( KERN_INFO "Loading driver...\n" );
	
	int result;

	if ( leds_major ) {
		dev = MKDEV ( leds_major, leds_minor );
		result = register_chrdev_region ( dev, NUM_DEVICES, "leds" );
	} else {
		result = alloc_chrdev_region ( &dev, leds_minor, NUM_DEVICES, "leds" );
		leds_major = MAJOR( dev );
	}

	if ( result < 0 ) {
		printk ( KERN_WARNING "leds: can't get major %d\n", leds_major );
		return result;
	}

	// Build dev_t data item
	dev = MKDEV( leds_major, leds_minor );

	// int n = sizeof(avr32_pio_t);
	// printk ( KERN_INFO "requesting region a of %dB\n", n );
	result = request_region ( AVR32_PIOB_ADDRESS, MEM_QUANTUM, "leds" );
	if ( result <= 0 ) {
		printk( KERN_WARNING "Could not request region at PIOB\n" );
		leds_exit ();
		return -ENODEV;
	}

	// Initialize the leds
	piob->per = 0xff;
	piob->oer = 0xff;

	// Set up char_dev structure for the device
	struct cdev *char_dev = cdev_alloc ();
	cdev_init ( char_dev, &led_fops );
	int error = cdev_add (char_dev, devno, 1);
	if ( error )
		printk ( KERN_WARNING "Error code:%d while adding leds\n", error );
	printk ( KERN_INFO "Leds initialized\n" );
	return 0;
}

static void __exit leds_exit ( void ) {
	// int n = sizeof(avr32_pio_t);
	piob->codr = 0xff;
	release_region ( AVR32_PIOB_ADDRESS, MEM_QUANTUM );
	unregister_chardev_region ( dev, NUM_DEVICES );
	printk ( KERN_INFO "Leds unloaded\n" );
}

module_init ( leds_init );
module_exit ( leds_exit );
