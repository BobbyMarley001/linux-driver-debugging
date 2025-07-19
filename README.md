# 🧠 Linux Driver Debugging (Academic Project)

This is a simple academic project that demonstrates writing, building, and debugging a basic **Linux kernel module** using tools like `insmod`, `rmmod`, and `dmesg`. It is ideal for those starting with Linux device driver development or exploring how kernel modules interact with the operating system.

---

## 📘 Overview

- **Author**: Bala Esakki T  
- **Language**: C  
- **Platform**: Linux (Ubuntu recommended)  
- **Tools Used**: GCC, Make, insmod, rmmod, dmesg  
- **License**: MIT (for educational use)


---

## 🛠️ Prerequisites

Before building the module, make sure your system has the required development tools and kernel headers installed:

```bash
sudo apt update
sudo apt install build-essential linux-headers-$(uname -r)


⚙️ How to Use
🔧 Build the Kernel Module

make

This generates my_driver.ko, the loadable kernel object.

📥 Load the Module

sudo insmod my_driver.ko

🧾 View Kernel Log Output

sudo dmesg | tail

Expected output

MyDriver: Module loaded

📤 Remove the Module

sudo rmmod my_driver

Then check logs again:

sudo dmesg | tail

Expected output:

MyDriver: Module unloaded

❌ Clean Up Build Files

make clean


