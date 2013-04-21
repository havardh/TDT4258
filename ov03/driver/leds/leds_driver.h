#ifndef _LEDS_H_
#define _LEDS_H_

#define NUM_DEVICES			1

static ssize_t open_leds( struct inode *inode, struct file *filp );

static ssize_t release_leds( struct inode *inode, struct file *filp );

static ssize_t read_leds( struct file *filp, char __user *buff, 
	size_t count, loff_t *offp );

ssize_t write_leds ( struct file *filp, char __user *buff, 
	size_t count, loff_t *offp );

//static void __init leds_init ( void );
static void __exit leds_exit ( void );

// struct leds_device {
//	struct semaphore sem;
// 	int quantum;
//	struct cdev char_dev;
//}

#endif /* _LEDS_H_ */
