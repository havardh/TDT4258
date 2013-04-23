#ifndef BUTTONS_DRIVER_H_
#define BUTTONS_DRIVER_H_

#define NUM_DEVICES			1

static irqreturn_t button_interrupt(int irq, void *dev_id);
static int __init button_init(void);
static void __exit button_exit(void);
static ssize_t driver_read (struct file *filp, char __user *buff, size_t count, loff_t *offp);

#endif /* BUTTONS_DRIVER_H_ */
