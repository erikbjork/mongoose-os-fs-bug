```
$ mos build --platform esp32
Connecting to https://mongoose.cloud, user test
Uploading sources (1431 bytes)
Firmware saved to build/fw.zip
$ mos flash
Loaded bug/esp32 version 1.0 (20180424-121152/???)
Using port /dev/ttyUSB0
Opening /dev/ttyUSB0 @ 115200...
Connecting to ESP32 ROM, attempt 1 of 10...
  Connected, chip: ESP32D0WDQ6 R1
Running flasher @ 460800...
  Flasher is running
Flash size: 4194304, params: 0x0220 (dio,32m,40m)
Deduping...
    18368 @ 0x1000 -> 6080
     3072 @ 0x8000 -> 0
    16384 @ 0x9000 -> 8192
     8192 @ 0xd000 -> 0
  1446528 @ 0x10000 -> 33408
   262144 @ 0x190000 -> 4096
Writing...
     4096 @ 0x1000
     4096 @ 0x5000
     8192 @ 0x9000
    32768 @ 0x16000
     4096 @ 0x171000
     4096 @ 0x197000
Wrote 51776 bytes in 0.79 seconds (514.78 KBit/sec)
Verifying...
    18368 @ 0x1000
     3072 @ 0x8000
    16384 @ 0x9000
     8192 @ 0xd000
  1446528 @ 0x10000
   262144 @ 0x190000
Booting firmware...
All done!
$ mos call FS.List '{"path":"/"}'
Using port /dev/ttyUSB0
[
  "ca.pem",
  "conf0.json",
  "index.html",
  "xx1234"
]
$ mos call FS.Remove '{"filename":"/xx1234"}'
Using port /dev/ttyUSB0
null
$ mos call FS.List '{"path":"/"}'
Using port /dev/ttyUSB0
[
  "ca.pem",
  "conf0.json",
  "index.html",
  "xx1234"
]

```
