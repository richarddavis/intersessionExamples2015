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
  int pixel = counter % 15;
  // How can you change the color?
  np.setPixelColor(pixel, 255, 255, 255);
  // How can you slow this down?
  delay(100);
  // How can you make only one pixel light up at at time?
  //np.clear();

  Serial.print("The counter is :");
  Serial.println(counter);
  Serial.print("The pixel number is :");
  Serial.println(pixel);
  
   counter++;
}
