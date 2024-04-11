#include <linux/kernel.h>
#include <linux/init.h>

#include <linux/module.h> /* Needed by all modules */
#include <linux/printk.h> /* Needed for pr_info() */

MODULE_DESCRIPTION("My kernel module");
MODULE_AUTHOR("Jacques");
MODULE_LICENSE("GPL");

static int dummy_init(void)
{
    // printk(KERN_INFO "Hi");
    pr_info("Hello\n");

    /* A non 0 return means init_module failed; module can't be loaded. */
    return 0;
}

static void dummy_cleanup(void)
{
    // printk(KERN_INFO "Bye");
    pr_info("Goodbye\n");
}

module_init(dummy_init);
module_exit(dummy_cleanup);
