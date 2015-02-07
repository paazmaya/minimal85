# minimal85

[![Analytics](https://ga-beacon.appspot.com/UA-2643697-15/minimal85/index?flat)](https://github.com/igrigorik/ga-beacon)

Code snippets for [Atmel ATtiny85](http://www.atmel.com/devices/ATTINY85.aspx) via
 [Arduino-Tiny](http://code.google.com/p/arduino-tiny/).

Please note that all the examples are originally from the
[Arduino project](http://arduino.cc), which are just slightly modified.

## Tools setup

* Get Arduino 1.0.1 (http://arduino.cc/en/Main/Software)
* Get Arduino-Tiny 0100-0015 (http://code.google.com/p/arduino-tiny/downloads/list)
* Install Arduino 1.0.1
* Copy files from Arduino-Tiny to Arduino 1.0.1 installation location
* Start Arduino and check that in `Tools` > `Board` there are several ATtiny chips listed
* The one listed as `ATtiny85 @ 8 MHz (internal oscillator; BOD disabled)` is the one used.


## ATMEL ATTINY45 / ARDUINO Pins

As defined in `pins_arduino.c` of Arduino-Tiny.

```c
//                           +-\/-+
//  Ain0       (D  5)  PB5  1|    |8   VCC
//  Ain3       (D  3)  PB3  2|    |7   PB2  (D  2)  INT0  Ain1
//  Ain2       (D  4)  PB4  3|    |6   PB1  (D  1)        pwm1
//                     GND  4|    |5   PB0  (D  0)        pwm0
//                           +----+
```

## Related links

* http://mchr3k-arduino.blogspot.fi/2012/01/history-getting-started-with-attiny85.html


## Contributing

[Please refer to a GitHub blog post on how to create somewhat perfect pull request.](https://github.com/blog/1943-how-to-write-the-perfect-pull-request "How to write the perfect pull request")
