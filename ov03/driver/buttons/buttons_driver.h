#ifndef BUTTONS_DRIVER_H_
#define BUTTONS_DRIVER_H_

#define NUM_DEVICES			1
#define MEM_QUANTUM			sizeof(avr32_pio_t);

static void open_buttons( struct inode *inode, struct file *filp );

static void release_buttons( struct inode *inode, struct file *filp );

static void read_buttonss( struct file *filp, char __user *buff,
	size_t count, loff_t *offp );

ssize_t void write_buttons ( struct file *filp, char __user *buff,
	size_t count, loff_t *offp );

#endif /* BUTTONS_DRIVER_H_ */
