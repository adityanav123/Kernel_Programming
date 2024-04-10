/*
 * hello-3.c : Illustrating the __init, __initdata, __exit macros.
 * */
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h> // Needed for the macros

static int hello3_data __initdata = 3;

static int __init hello3_init(void) {
  printk(KERN_INFO "Hello Word %d\n", hello3_data);
  return 0;
}

static void __exit hello3_exit(void) { printk(KERN_INFO "Goodbye, World 3\n"); }

module_init(hello3_init);
module_exit(hello3_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Aditya Navphule");
MODULE_DESCRIPTION("Hello World Module!");
