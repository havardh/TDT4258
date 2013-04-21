#ifndef BUTTONS_DRIVER_H_
#define BUTTONS_DRIVER_H_

#define NUM_DEVICES			1

static ssize_t open_buttons( struct inode *inode, struct file *filp );

static ssize_t release_buttons( struct inode *inode, struct file *filp );

static ssize_t read_buttons( struct file *filp, char __user *buff,
	size_t count, loff_t *offp );

ssize_t write_buttons ( struct file *filp, char __user *buff,
	size_t count, loff_t *offp );

static void __exit buttons_exit ( void );

#endif /* BUTTONS_DRIVER_H_ */
