# Arduino Tutorial 3 - Using SPI and Logging Data #

###Introduction###

The ability to collect data is an incredibly valuable tool to an Engineer, whether it's measuring the vibrations of traffic across a bridge to check for oscillations or to calculate the acceleration of rocket, it's essential to be able to effectively test and monitor a system.

Engineers in the field often need to verify that a systems is functioning correctly. This can often be a difficult task as conditions can be remote, harsh and sometimes even hostile! Fortunately tools such as a micro controller, such as an Arduino, can be employed to perform this monitoring for a far.

This tutorial will teach you how to interface with and collect data from a range of devices using a protocol known as SPI (Serial Peripheral Interface). This is an interface that will allow you to talk to sensors, storage and other devices. It is a general purpose protocol and can be used for a whole range of devices, beyond the Accelerometer and SD card examples used in this tutorial.

###Aims###

By completing this tutorial, you should be able to confidently -

- Connect a sensor to an Arduino using the SPI bus
- View the live data being collected by the Arduino, on a Computer, using the built-in Serial Monitor
- Store this data using an SD card, allowing you to view the data at a later date

<div style="text-align:center"><img src ="https://github.com/Bucknalla/Arduino-Tutorials/blob/master/img/accelerometer-arduino.png" /></div>

        Example of the data recorded by the Arduino, using an Accelerometer and plotted using Excel


## Getting Started ##

If you haven't had a look at tutorial 1, it might be worth starting there before having a go at this one!

**Tutorials**
  - [Tutorial 1 - Introduction to Arduino](BROKEN)
  - [Tutorial 2 - LEDS, Thermistors and more!](BROKEN)

## Background ##

As examples of common devices that might be used to produce data and log it, this tutorial will cover using an Adafruit ADXL345 Accelerometer and SD card reader, in conjunction with an Arduino Uno. This hardware should be provided to you in the lab but if you wish to purchase these components you can find links to them at the end of this tutorial.

This tutorial assumes you have already set up the Arduino IDE and are comfortable flashing sketches to an Arduino. If you are not sure how to do this, please see [Tutorial 1](BROKEN).

## Serial Peripheral Interface (SPI) ##

The Serial Peripheral Interface or SPI bus, is an interface that is commonly used for communication between micro controllers and peripheral devices such as sensors and SD cards.


There are other types of buses which can also be used to communicate with devices such as the i2c bus but are outside of the scope of this project and will be covered in a later tutorial.



## Accelerometer ##

### Connecting to the Arduino ###

### Installing the library ###

## SD Card ##

### Connecting to the Arduino ###

### Installing the library ###

## Useful links and further learning! ##

####
