#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
const int LDRpin = A0;
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(LDRpin,INPUT);
}

void loop() {
  int sensorValue = analogRead(LDRpin);
  Serial.print(sensorValue);
  lcd.setCursor(0,0);
  lcd.print("irvan ganteng");
  lcd.setCursor(0,1);
  lcd.print(sensorValue);
  delay(100);
}
