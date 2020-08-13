obj-m += stick_driver.o

KERNL_DIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)
all:
	$(MAKE) -C $(KERNL_DIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNL_DIR) M=$(PWD) clean

