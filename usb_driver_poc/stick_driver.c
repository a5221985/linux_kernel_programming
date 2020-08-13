#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/usb.h>

static int pen_probe(struct usb_interface *interface, const struct usb_device_id *id) {
	printk(KERN_INFO "[*] SolidusCode Pen drive (%40X:%40X) plugged\n", id->idVendor, id->idProduct);
	return 0;
}

static void pen_disconnect(struct usb_interface *interface) {
	printk(KERN_INFO "[*] SolidusCode Pen drive removed\n");
}

static struct usb_device_id pen_table[] = {
	//0781:5567
	{ USB_DEVICE(0x0781, 0x5567) },
	//0951:162a
	//{ USB_DEVICE(0x0951, 0x162a) },
	{}
};
MODULE_DEVICE_TABLE(usb, pen_table);

static struct usb_driver pen_driver = 
{
	.name = "SanDisk-USB Stick-Driver",
	.id_table = pen_table,
	.probe = pen_probe,
	.disconnect = pen_disconnect,
};

static int __init pen_init(void) {
	int ret = -1;
	printk(KERN_INFO "[*] SolidusCode Construtor of driver");
	printk(KERN_INFO "\tRegistering Driver with Kernel");
	ret = usb_register(&pen_driver);
	printk(KERN_INFO "\tRegistration is complete");
	return ret;
}

static void __exit pen_exit(void) {
	// deregister
	printk(KERN_INFO "[*] SolidusCode Destructor of driver");
	usb_deregister(&pen_driver);
	printk(KERN_INFO "\tunregistration complete!");
}

module_init(pen_init);
module_exit(pen_exit);

MODULE_AUTHOR("Solidus Code");
MODULE_LICENSE("GPL");
