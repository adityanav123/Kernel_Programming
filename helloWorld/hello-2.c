/*
 * hello-2.c : Demostrating the module_init() and module_exit() macros.
 * This is preferred over using init_module() and cleanup_module()
 * */
#include <linux/init.h> // Needed for macros
#include <linux/kernel.h>
#include <linux/module.h>

static int __init hello_2_init(void) {
  printk(KERN_INFO "Hello World2\n");
  return 0;
}

static void __exit hello_2_exit(void) {
  printk(KERN_INFO "Goodbye, World 2!\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aditya Navphule");
MODULE_DESCRIPTION("Hello World Module!");
