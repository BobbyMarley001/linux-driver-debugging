#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bala Esakki T");
MODULE_DESCRIPTION("A simple Linux kernel module for academic purposes.");
MODULE_VERSION("1.0");

static int __init my_module_init(void) {
    printk(KERN_INFO "MyDriver: Module loaded\n");
    return 0;
}

static void __exit my_module_exit(void) {
    printk(KERN_INFO "MyDriver: Module unloaded\n");
}

module_init(my_module_init);
module_exit(my_module_exit);
