obj-m += hello_world.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD       := $(shell pwd)

all:
	${MAKE} -C ${KERNELDIR} M=${PWD}

