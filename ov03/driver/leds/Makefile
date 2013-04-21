###############################################################################
#
# Linux kjernemodul Makefile
#
###############################################################################

# navn på kjernemodul (navnet på C-fila men uten ".c")
MODULE = leds_driver

ifneq ($(KERNELRELEASE),)
obj-m += ${MODULE}.o

else

# sti til linux-kildekoden
KERNELDIR := ../../linux

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

upload: 
	scp $(MODULE).ko avr32@129.241.103.209:~/project

endif

.PHONY : clean
clean:
	rm -rf *.o *.ko .*.cmd *.mod.* .tmp*  Module.symvers modules.order Module.symvers modules.order
