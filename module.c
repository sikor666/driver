#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Me");
MODULE_LICENSE("GPL");

static int dummy_init(void)
{
    printk(KERN_INFO "Hi");
    return 0;
}

static void dummy_exit(void)
{
    printk(KERN_INFO "Bye");
}

module_init(dummy_init);
module_exit(dummy_exit);
