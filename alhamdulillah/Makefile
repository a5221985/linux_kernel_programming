obj-m += alhamdulillah.o
obj-m += alhamdulillah-2.o
obj-m += alhamdulillah-3.o
obj-m += alhamdulillah-4.o
obj-m += alhamdulillah-5.o
obj-m += startstop.o
startstop-objs := start.o stop.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

