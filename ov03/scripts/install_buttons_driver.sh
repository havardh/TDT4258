#!/bin/sh
insmod buttons_driver.ko
mknod /dev/buttons c 252 0
