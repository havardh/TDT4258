#ifndef _LEDS_H_
#define _LEDS_H_

#define NUM_DEVICES			1
#define MEM_QUANTUM			sizeof(avr32_pio_t);

static void open_leds( struct inode *inode, struct file *filp );

static void release_leds( struct inode *inode, struct file *filp );

static void read_leds( struct file *filp, char __user *buff, 
	size_t count, loff_t *offp );

ssize_t void write_leds ( struct file *filp, char __user *buff, 
	size_t count, loff_t *offp );

// struct leds_device {
//	struct semaphore sem;
// 	int quantum;
//	struct cdev char_dev;
//}

#endif /* _LEDS_H_ */
