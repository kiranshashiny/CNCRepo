## Print the welding status on 16X2 LCD.

This was a prototype done for just demoing the statuses of the welding machine status.

The connections are :

A Tactile switch is connected to Pin 9, and when the user presses it
the status changes on the LCD.
The messages rollover from 1-5 and starts over as the user keeps pressing the tactile switch.


LCD RS pin to digital pin 12

LCD Enable pin to digital pin 11

LCD D4 pin to digital pin 5

LCD D5 pin to digital pin 4

LCD D6 pin to digital pin 3

LCD D7 pin to digital pin 2

LCD R/W is connected to GND.

The 5V and GND are connected to the LCD.

Additionally, wire a 10k pot to +5V and GND, with it's wiper (output) to LCD screens VO pin (pin3). A 220 ohm resistor is used to power the backlight of the display, usually on pin 15 and 16 of the LCD connector


Pin 9 of Arduino Uno is connected to the Tactile switch on one end.

Reference : 
https://www.arduino.cc/en/Tutorial/HelloWorld


Some snapshots of the LCD Displaying the Statuses ( all dummy data )

![img_20180221_194931](https://user-images.githubusercontent.com/14288989/36484532-a6505730-173f-11e8-974a-1fbb6edd8af6.jpg)

![img_20180221_194938](https://user-images.githubusercontent.com/14288989/36484533-a69a66cc-173f-11e8-9003-a1337fce137a.jpg)

![img_20180221_194945](https://user-images.githubusercontent.com/14288989/36484538-a84f9ffa-173f-11e8-9da9-5af4f981b3f6.jpg)
