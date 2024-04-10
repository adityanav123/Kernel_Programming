/*
 * hello-4.c : Demonstrates module documentation
 */
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#define DRIVER_AUTHOR "Aditya Navphule <adityanav@duck.com>"
#define DRIVER_DESC "A sample driver"

static int __init init_hello_4(void) {
  printk(KERN_INFO "Hello World 4!\n");
  return 0;
}

static void __exit cleanup_hello_4(void) {
  printk(KERN_INFO "Goodbye, World 4!\n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);

/* getting rid of the taited kernel message */
MODULE_LICENSE("GPL");

MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
