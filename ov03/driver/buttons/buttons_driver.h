#ifndef BUTTONS_DRIVER_H_
#define BUTTONS_DRIVER_H_

#define NUM_DEVICES			1

static int __init button_init(void);
static void __exit button_exit(void);

static ssize_t open_buttons( struct inode *inode, struct file *filp );
static ssize_t release_buttons( struct inode *inode, struct file *filp );

static ssize_t read_buttons (struct file *filp, char __user *buff, size_t count, loff_t *offp);
static ssize_t write_buttons ( struct file *filp, char __user *buff, size_t count, loff_t *offp );

int (*ioctl) (struct inode *inode, struct file *filp, unsigned int cmd, unsigned long param);
static irqreturn_t button_interrupt(int irq, void *dev_id);

#endif /* BUTTONS_DRIVER_H_ */
