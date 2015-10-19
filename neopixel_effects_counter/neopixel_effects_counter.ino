#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#include <Wire.h>
#include "Neopixel.h"

Neopixel np;
int counter  = 0;

void setup() {
  Serial.begin(9600);
  np.init();
}

void loop() {
  //neoFade();
  //neoBlink();
  neoChase();
  counter++;
}

void neoFade() {
  int brightness = counter % 255;
  np.setStripColor(255, 255, 255);
  //np.setStripColor(255, brighness, 255);  
  np.setBrightness(brightness);
  delay(20);
}

void neoBlink() {
  np.setStripColor(255, 255, 255);
  delay(100);
  np.clear();
  delay(100);
}

void neoChase() {
  int pixel = counter % 15;
  np.setPixelColor(pixel, 255, 255, 255);
  delay(20);
  np.clear();
}

//  np.setBrightness(255);
//
//  for (int i=0; i < 15; i++) {
//    np.setPixelColor(i, 255, 255, 255);
//    delay(100);
//  }
//  np.clear();
//  delay(500);
