#include <linux/init.h> /* Needed for the macros */
#include <linux/module.h> /* Needed by all modules */
#include <linux/printk.h> /* Needed for pr_info() */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jacques");
MODULE_DESCRIPTION("A sample driver");

static int dummy_data __initdata = 3;

static int __init dummy_init(void)
{
    pr_info("Hello %d\n", dummy_data);

    /* A non 0 return means init_module failed; module can't be loaded. */
    return 0;
}

static void __exit dummy_exit(void)
{
    pr_info("Goodbye\n");
}

module_init(dummy_init);
module_exit(dummy_exit);
