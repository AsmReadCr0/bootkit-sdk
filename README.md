# bootkit-sdk
- minimalistic uefi backdoor injecting payload before OS boot to achieve kernel mode execution

# features
- read/write protected process memory
- get eprocess
- get encrypted CR3 register for physical memory reading
- get image base address

# about
- patches GetVariable with payload
- uses **T**hread **E**nviromental **B**lock to store and read data. (**TEB**)
- able to call any kernel function

# usage
1. download files from **Releases** tab and put the files on your usb
2. go to your bios, and set it as first boot option

# contact
- source of this is available for purchase on my [telegram](https://t.me/readcr0)
- if you are purchasing, dont say hello, show proof of funds and we can talk
- do not dm me unless purchase, im not a teacher

# license
licensed by MIT license
  
