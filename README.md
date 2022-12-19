# Mac-RGB
Mac-RGB

RGB LED Control Program.
The program is still under development!

The backlight is controlled through the USB serial port, based on Arduino.

The program supports controlling 4 LEDs at once, red, green, blue, and white, you can make smaller colors, for example, without white.
![Mac-RGB](./img/1.png)

Arduino schematic here -> [Scheme](https://github.com/DiCode77/Mac-RGB/blob/main/img/2.jpg)

Arduino firmware sketch here -> [Sketch](https://github.com/DiCode77/Mac-RGB/tree/main/sketch)

Program for firmware arduino here -> [Arduino IDE](https://www.arduino.cc/en/software)

As you assemble the circuit, be careful with the 12V power supply so that there is no short circuit, and the voltage does not go to the arduino, and does not damage the USB PORT! Better double check! The scheme is absolutely safe, the main thing is to do everything right.

As we have already assembled the circuit, you need to connect the arduino to the Mac, run the program, the program automatically finds the arduino, and you're done, set your color!
