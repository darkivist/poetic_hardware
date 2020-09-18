#include "Wire.h"
#include "Adafruit_LiquidCrystal.h"

Adafruit_LiquidCrystal lcd(0);

void setup() {
  pinMode(12, INPUT_PULLUP);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 1);
  digitalWrite(12, HIGH);
  int wireStatus=digitalRead(12);
  if (wireStatus==LOW) {
        lcd.print("hello world!");
  }
    else if (wireStatus==HIGH) {
      lcd.print("goodbye world!");
    }
}
