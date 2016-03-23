# Arduino Tutorial 2 - Using SPI and Logging Data #

The ability to collect data is an incredibly valuable tool to an Engineer, whether it's the vibrations of traffic across a bridge or the verifying the stress in a mechanism, it's essential to be able to effectively test and monitor.

This tutorial aims to teach you how to interface with and collect data from a range of devices using a protocol known as SPI (Serial Peripheral Interface). This is an interface that will allow you to talk to sensors, storage and other devices. It is a general purpose protocol and can be used for a whole range of devices, beyond the Accelerometer and SD card examples used in this tutorial.

<div style="text-align:center"><img src ="https://github.com/Bucknalla/Arduino-Tutorials/blob/master/img/accelerometer.png" /></div>

###Aims###

By completing this tutorial, you should be able to confidently -

- Connect a sensor to an Arduino over the SPI bus
- View the data being collected by the Arduino, on a Computer using the Serial Monitor
- Store the collected data with an SD card, allowing you to collect store the data collected

## Getting Started ##

The following drivers are based on the Adafruit Unified Sensor Driver:

**Tutorials**
  - [Arduino Tutorial 1 - Introduction to Arduino](https://github.com/adafruit/Adafruit_ADXL345)
  - [Adafruit\_LSM303DLHC](https://github.com/adafruit/Adafruit_LSM303DLHC)
  - [Adafruit\_MMA8451\_Library](https://github.com/adafruit/Adafruit_MMA8451_Library)


## Background ##

Any driver that supports the Adafruit unified sensor abstraction layer will implement the Adafruit\_Sensor base class.  There are two main typedefs and one enum defined in Adafruit_Sensor.h that are used to 'abstract' away the sensor details and values:

**Sensor Types (sensors\_type\_t)**

## Accelerometer ##

### Installing the library ###




### SD Card ###



## Useful links and further learning! ##
