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
  neoFade();
  //neoBlink();
  //neoChase();
}

void neoFade() {
  int counter = 0;
  while (counter < 255) {
    int brightness = counter % 255;
    np.setStripColor(255, 255, 255);
    //np.setStripColor(255, brighness, 255);
    np.setBrightness(brightness);
    delay(20);
    counter ++;
  }
}

void neoBlink() {
  np.setStripColor(255, 255, 255);
  delay(100);
  np.clear();
  delay(100);
}

void neoChase() {
  int pixel = 0;
  while (pixel < 15) {
    np.setPixelColor(pixel, 255, 255, 255);
    delay(20);
    np.clear();
    pixel++;
  }
}
