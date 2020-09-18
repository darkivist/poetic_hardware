#include "Wire.h"
#include "Adafruit_LiquidCrystal.h"

Adafruit_LiquidCrystal lcd(0);

void setup() {
  pinMode(12, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);

  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  int wireStatus=digitalRead(12);
  int wireStatus2=digitalRead(11);
  int wireStatus3=digitalRead(10);
  int wireStatus4=digitalRead(9);
//1
if ((wireStatus==LOW) && (wireStatus2==LOW) && (wireStatus3==LOW) && (wireStatus4==LOW)) {
    lcd.print("This is the");
    delay(500);
    lcd.setCursor(0,1);
    lcd.print("start.");
  }
//2
else if ((wireStatus==LOW) && (wireStatus2==LOW) && (wireStatus3==LOW) && (wireStatus4==HIGH)) {
  lcd.print("Blue rings,");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("grayer.");
  delay(1000);
  lcd.clear();
  }
//3
else if ((wireStatus==LOW) && (wireStatus2==LOW) && (wireStatus3==HIGH) && (wireStatus4==LOW)) {
  lcd.print("They've changed.");
  delay(1000);
  lcd.clear();
  }
//4
else if ((wireStatus==LOW) && (wireStatus2==LOW) && (wireStatus3==HIGH) && (wireStatus4==HIGH)) {
  lcd.print("It's going to");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("be okay.");
  delay(1000);
  lcd.clear();
  }
//5
else if ((wireStatus==LOW) && (wireStatus2==HIGH) && (wireStatus3==LOW) && (wireStatus4==LOW)) {
  lcd.print("Electricity");
  delay(1000);
  lcd.clear();
  }
//6
else if ((wireStatus==LOW) && (wireStatus2==HIGH) && (wireStatus3==LOW) && (wireStatus4==HIGH)) {
  lcd.print("Five (5) wires.");
  delay(1000);
  lcd.clear();
  }
//7
else if ((wireStatus==LOW) && (wireStatus2==HIGH) && (wireStatus3==HIGH) && (wireStatus4==LOW)) {
  lcd.print("Live wires.");
  delay(1000);
  lcd.clear();
  }
//8
else if ((wireStatus==LOW) && (wireStatus2==HIGH) && (wireStatus3==HIGH) && (wireStatus4==HIGH)) {
  lcd.print("Keep going");
  delay(1000);
  lcd.clear();
  }
//9
else if ((wireStatus==HIGH) && (wireStatus2==LOW) && (wireStatus3==LOW) && (wireStatus4==LOW)) {
  lcd.print("Water conducts.");
  delay(1000);
  lcd.clear();
  }
//10
else if ((wireStatus==HIGH) && (wireStatus2==LOW) && (wireStatus3==LOW) && (wireStatus4==HIGH)) {
  lcd.print("Inter-activity.");
  delay(1000);
  lcd.clear();
  }
//11
else if ((wireStatus==HIGH) && (wireStatus2==LOW) && (wireStatus3==HIGH) && (wireStatus4==LOW)) {
  lcd.print("Thrice soldered");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("circuit.");
  delay(1000);
  lcd.clear();
  }
//12
else if ((wireStatus==HIGH) && (wireStatus2==LOW) && (wireStatus3==HIGH) && (wireStatus4==HIGH)) {
  lcd.print("Connections...");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("made.");
  delay(1000);
  lcd.clear();
  }
//13
else if ((wireStatus==HIGH) && (wireStatus2==HIGH) && (wireStatus3==LOW) && (wireStatus4==LOW)) {
  lcd.print("Connections...");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("broken.");
  delay(1000);
  lcd.clear();
  }
//14
else if ((wireStatus==HIGH) && (wireStatus2==HIGH) && (wireStatus3==LOW) && (wireStatus4==HIGH)) {
  lcd.print("It's the way of");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("things.");
  delay(1000);
  lcd.clear();
  }
//15
else if ((wireStatus==HIGH) && (wireStatus2==HIGH) && (wireStatus3==HIGH) && (wireStatus4==LOW)) {
  lcd.print("Brings us...");
  delay(500);
  lcd.setCursor(0,1);
  lcd.print("together.");
  delay(1000);
  lcd.clear();
  }
//16
else if ((wireStatus==HIGH) && (wireStatus2==HIGH) && (wireStatus3==HIGH) && (wireStatus4==HIGH)) {
  lcd.print("This is the end.");
  delay(1000);
  lcd.clear();
}
}
