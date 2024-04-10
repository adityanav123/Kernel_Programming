/*
 * hello-1.c - The Simplest Kernel Module
 * */
#include <linux/kernel.h> // Needed for KERN_INFO
#include <linux/module.h> // Needed for all modules

int init_module(void) {
  printk(KERN_INFO "Hello World 1.\n");

  return 0; // non-zero code means init_module failed, module can't be loaded.
}

void cleanup_module(void) { printk(KERN_INFO "Goodbye world 1.\n"); }

MODULE_LICENSE("GPL");
