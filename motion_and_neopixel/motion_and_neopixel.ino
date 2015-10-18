#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#include <Wire.h>
#include "Neopixel.h"
#include <MotionSensor.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_LSM303_U.h>

Neopixel np;
bool success;
MotionSensor motion;

void setup() {
  Serial.begin(9600);
  success = motion.init();
  if (success == false) {
    delay(1000);
    Serial.println("Accelerometer is not connected.");
  }
  np.init();
}

void loop() {
  if (motion.moving()) {
    np.setStripColor(255, 0, 0);
    delay(1000);
    np.setStripColor(0, 255, 0);
    delay(1000);
    np.setStripColor(0, 0, 255);
    delay(1000);
  }
  np.clear();
  delay(100);
  
//  for (int i=255; i > 0; i--) {
//    np.setBrightness(i);
//    delay(10);
//  }
//  np.setBrightness(255);
//  
//  for (int i=0; i < 15; i++) {
//    np.setPixelColor(i, 255, 255, 255);
//    delay(100);
//  }
//  np.clear();
//  delay(500);
}
