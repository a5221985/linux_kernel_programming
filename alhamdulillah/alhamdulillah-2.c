/*
 * alhamdulillah-2.c - Demonstrating the module_init() and module_exit() macros.
 * This is preferred over using init_modules() and cleanup_module().
 */
#include <linux/module.h>    /* Needed by all modules */
#include <linux/kernel.h>    /* Needed for KERN_INFO */
#include <linux/init.h>      /* Needed for the macros */

static int __init alhamdulillah_2_init(void)
{
    printk(KERN_INFO "Alhamdulillah 2\n");
    return 0;
}

static void __exit alhamdulillah_2_exit(void)
{
    printk(KERN_INFO "Jazakallahu Khairan 2\n");
}

module_init(alhamdulillah_2_init);
module_exit(alhamdulillah_2_exit);

