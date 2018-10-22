#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_8x16minimatrix matrix;

void setup() {
  matrix.begin(0x70);
  matrix.setRotation(1);
  matrix.setTextSize(1);
  matrix.setTextColor(LED_ON);
  matrix.setTextWrap(false);
}

void loop() {
  for (int8_t x = 16; x >= -75; x--) {
    matrix.clear();
    matrix.setCursor(x, 0);
    matrix.print("Hello World");
    matrix.writeDisplay();
    delay(100);
  }
}
