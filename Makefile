EXTRA_CFLAGS = -Wall -g

obj-m += module.o
obj-m += chardev.o
obj-m += procfs1.o

PWD := $(CURDIR) 

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
