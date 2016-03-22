#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>
#include <SD.h>
#include <SPI.h>
#include <stdlib.h>

/* Assign a unique ID to this sensor at the same time */
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

void setup(void)
{
  Serial.begin(9600);
  Serial.println("Accelerometer Test"); Serial.println("");
  pinMode(10, OUTPUT);

  /* Initialise the sensor */
  if(!accel.begin())
  {
    /* There was a problem detecting the ADXL345 ... check your connections */
    Serial.println("Ooops, no ADXL345 detected ... Check your wiring!");
    while(1);
  }
  if (!SD.begin(10)) {
    Serial.println("SD - initialization failed!");
    return;
  }
  Serial.println("SD - initialization done.");

  SD.remove("test.csv");
  File myFile = SD.open("test.csv", FILE_WRITE);
  if (myFile) {
    myFile.println("X,Y,Z");

  // close the file:
    myFile.close();
    Serial.println("...");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
}

void loop(void)
{
  /* Get a new sensor event */
  sensors_event_t event;
  accel.getEvent(&event);
  char accx[15];
  char accy[15];
  char accz[15];

  /* Display the results (acceleration is measured in m/s^2) */

  float x = event.acceleration.x;
  float y = event.acceleration.y;
  float z = event.acceleration.z;

Serial.print(event.acceleration.x); Serial.print("  ");
Serial.print(event.acceleration.y); Serial.print("  ");
Serial.print(event.acceleration.z); Serial.print("  ");


  String temx = dtostrf(x,3,2,accx);
  String temy = dtostrf(y,3,2,accy);
  String temz = dtostrf(z,3,2,accz);
  File myFile = SD.open("test.csv", FILE_WRITE);

  delay(500);

  if (myFile) {
    myFile.println(temx + "," + temy + "," + temz);

  // close the file:
    myFile.close();
    Serial.println("...");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
}
