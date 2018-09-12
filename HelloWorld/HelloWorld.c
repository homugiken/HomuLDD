/*____________________________________________________________________________*/
/* insmod HelloWorld.ko */
/* rmmod HelloWorld.ko */
/*¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("homusuika");
MODULE_DESCRIPTION("Hello World Module Example");
MODULE_VERSION("0.01");

static int __init hello_world_init (void)
{
    printk(KERN_ALERT "hello_world_init\n");
    return 0;
}

static void __exit hello_world_exit (void)
{
    printk(KERN_ALERT "hello_world_exit\n");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
