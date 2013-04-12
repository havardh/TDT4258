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

MODULE_LICENSE("Dual BSD/GPL");

static struct file_operations = {
	.owner = THIS_MODULE,
	.open = open_leds,
	.write = write_leds,
	.read = read_leds,
	release = release_leds
} led_ops;

static int leds_init ( void ) {

	printk ( KERN_INFO "Loading driver...\n" );
	int n = sizeof(avr32_pio_t);
	if ( !request_region ( AVR32_PIOB_ADDRESS, n, "leds" ) ) {
		printk( KERN_INFO "Could not request_region" );
		return -ENODEV;
	}

	volatile avr32_pio_t *piob = &AVR32_PIOB;
	piob->per = 0xff;
	piob->oer = 0xff;
	printk ( KERN_INFO "Leds initialized\n" );
	return 0;
}

static void open_leds( struct inode *inode, struct file *filp ) {}
static void read_leds( struct file *filp, char __user *buff, size_t count, loff_t *offp ) {}
static void release_leds( struct inode *inode, struct file *filp ) {}

static void write_leds ( struct file *filp, char __user *buff, size_t count, loff_t *offp ) {
	volatile avr32_pio_t *piob = &AVR32_PIOB;
	piob->codr = 0xff;
	piob->sodr = val;
	printk ( KERN_INFO "Leds ON!\n" );
}

static void leds_exit ( void ) {
	int n = sizeof(avr32_pio_t);
	release_region( AVR32_PIOB_ADDRESS, n );
	printk ( KERN_INFO "Leds unloaded\n" );
}

module_init(leds_init);
module_exit(leds_exit);
