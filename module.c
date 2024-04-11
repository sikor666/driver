#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");

static int init_module(void)
{
    printk(KERN_INFO "Hi");
    return 0;
}

static void cleanup_module(void)
{
    printk(KERN_INFO "Bye");
}

module_init(init_module);
module_exit(cleanup_module);
