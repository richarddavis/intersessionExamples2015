#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
#include <Wire.h>
#include "Neopixel.h"

Neopixel np;

void setup() {
  np.init();
}

void loop() {
  np.setStripColor(255, 0, 0);
  delay(1000);
  np.setStripColor(0, 255, 0);
  delay(1000);
  np.setStripColor(0, 0, 255);
  delay(1000);
  np.clear();
  delay(100);
}
