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
#include "buttons_driver.h"

MODULE_LICENSE("Dual BSD/GPL");

int buttons_major = 0;
int buttons_minor = 0;
int buttons_quantum = 0;

volatile avr32_pio_t *piob = &AVR32_PIOB;

dev_t dev;
struct buttons_dev *buttons_device;

static struct file_operations button_fops = { .owner = THIS_MODULE, .open =
		open_buttons, .write = write_buttons, .read = read_buttons, .release =
		release_buttons };

static void open_buttons(struct inode *inode, struct file *filp) {
	return 0;
}
static void read_buttons( struct file *filp, char __user *buff, size_t count, loff_t *offp ) {
	char output;
	if (count == 0)
	return 0;
	output = ~piob->pdsr;

	copy_to_user(buff, &output, 1);
	*offp += 1;
	return 1;
}
static void release_buttons(struct inode *inode, struct file *filp) {
	return 0;
}

ssize_t void write_buttons ( struct file *filp, char __user *buff,
		size_t count, loff_t *offp ) {
	return 0;
}

static int __init buttons_init ( void ) {
	printk ( KERN_INFO "Loading driver...\n" );

	int result;

	if ( buttons_major ) {
		dev = MKDEV ( buttons_major, buttons_minor );
		result = register_chrdev_region ( dev, NUM_DEVICES, "buttons" );
	} else {
		result = alloc_chrdev_region ( &dev, buttons_minor, NUM_DEVICES, "buttons" );
		buttons_major = MAJOR( dev );
	}

	if ( result < 0 ) {
		printk ( KERN_WARNING "buttons: can't get major %d\n", buttons_major );
		return result;
	}

	// Build dev_t data item
	dev = MKDEV( buttons_major, buttons_minor );

	// int n = sizeof(avr32_pio_t);
	// printk ( KERN_INFO "requesting region a of %dB\n", n );
	result = request_region ( AVR32_PIOB_ADDRESS, MEM_QUANTUM, "buttons" );
	if ( result <= 0 ) {
		printk( KERN_WARNING "Could not request region at PIOB\n" );
		buttons_exit ();
		return -ENODEV;
	}

	// Initialize the buttons
	piob->per |= 0xff;
	piob->puer |= 0xff;
	piob->ier |= 0xff;

	// Set up char_dev structure for the device
	struct cdev *char_dev = cdev_alloc ();
	cdev_init ( char_dev, &button_fops );
	int error = cdev_add (char_dev, devno, 1);
	if ( error )
	printk ( KERN_WARNING "Error code:%d while adding buttons\n", error );
	printk ( KERN_INFO "buttons initialized\n" );
	return 0;
}

static void __exit buttons_exit ( void ) {
	// int n = sizeof(avr32_pio_t);
	release_region ( AVR32_PIOB_ADDRESS, MEM_QUANTUM );
	unregister_chardev_region ( dev, NUM_DEVICES );
	printk ( KERN_INFO "buttons unloaded\n" );

	cdev_del(&driver_cdev);
}

module_init( buttons_init);
module_exit( buttons_exit);
