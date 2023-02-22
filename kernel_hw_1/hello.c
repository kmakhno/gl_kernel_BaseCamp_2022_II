#include <kernel/init.h>
#include <kernel/module.h>
#include <kernel/kernel.h>

MOUDLE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple module");
MODULE_AUTHOR("Kostiantyn Makhno");
MODULE_VERSION("0.1");

static int __init hello_init(void)
{
	pr_info("hello module was initialized\n");

	return 0;
}

static void __exit hello_exit(void)
{
	pr_info("hello module was uninitialized\n");
}

module_init(hello_init);
module_exit(hello_exit);
