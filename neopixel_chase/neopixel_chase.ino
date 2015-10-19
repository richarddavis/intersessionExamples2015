#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#include <Wire.h>
#include "Neopixel.h"

Neopixel np;
int counter = 0;

void setup() {
  Serial.begin(9600);
  np.init();
}

void loop() {
  // What is this % sign doing?
  int pixel = 0;
  while (pixel < 15) {
    np.setPixelColor(pixel, 255, 255, 255);
    delay(100);
    np.clear();
    Serial.print("The counter is :");
    Serial.println(counter);
    pixel++;
  }
}
