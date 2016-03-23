# Arduino Tutorial 2 - Using Accelerometers and Logging Data #

The ability to collect data is an incredibly valuable tool to an Engineer, whether it's the vibrations of traffic across a bridge or the stress in a mechanism, it's essential to be able to effectively test a design.

This tutorial aims to teach you how to interface with and collect data from a range of devices using a protocol known as SPI (Serial Peripheral Interface). This is an interface that will allow you to talk to sensors, storage and other devices. It is a general purpose protocol and can be used for a whole range of devices, beyond the Accelerometer and SD card examples used in this tutorial.

**Aims**

By completing this tutorial, you should be able to confidently -

- Connect a sensor to an Arduino over the SPI bus
- View the data being collected by the Arduino on a Computer using the Serial Monitor
- Store the collected data with an SD card, allowing you to collect data without needing a Computer

By reducing all data to a single **sensors\_event\_t** 'type' and settling on specific, **standardised SI units** for each sensor family the same sensor types return values that are comparable with any other similar sensor.  This enables you to switch sensor models with very little impact on the rest of the system, which can help mitigate some of the risks and problems of sensor availability and code reuse.

The unified sensor abstraction layer is also useful for data-logging and data-transmission since you only have one well-known type to log or transmit over the air or wire.

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


## SD Card ##

### Installing the library ###


## Useful links and further learning! ##
