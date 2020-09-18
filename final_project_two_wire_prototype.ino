#include "Wire.h"
#include "Adafruit_LiquidCrystal.h"

Adafruit_LiquidCrystal lcd(0);

void setup() {
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  int wireStatus=digitalRead(12);
  int wireStatus2=digitalRead(11);
  if ((wireStatus==LOW) && (wireStatus2==LOW)) {
        lcd.print("I'm alive! Don't");
        delay(500);
        lcd.setCursor(0,1);
        lcd.print("pull the wire!");
  }
    else if ((wireStatus==HIGH) && (wireStatus2==LOW)) {
      lcd.print("going, going");
      delay(1000);
      lcd.clear();
    }
    else if ((wireStatus==LOW) && (wireStatus2==HIGH)) {
      lcd.print("gone");
      delay(1000);
      lcd.clear();
          }
    else if ((wireStatus==HIGH) && (wireStatus2==HIGH)) {
      lcd.print("double gone");
      delay(1000);
      lcd.clear();
  }
}
