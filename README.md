# School of Engineering - Arduino Tutorial 2 #

Many small embedded systems exist to collect data from sensors, analyse the data, and either take an appropriate action or send that sensor data to another system for processing.

One of the many challenges of embedded systems design is the fact that parts you used today may be out of production tomorrow, or system requirements may change and you may need to choose a different sensor down the road.

Creating new drivers is a relatively easy task, but integrating them into existing systems is both error prone and time consuming since sensors rarely use the exact same units of measurement.

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
