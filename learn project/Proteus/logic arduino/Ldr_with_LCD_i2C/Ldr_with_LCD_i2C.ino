
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0X27, 16,2);
int sensorLDR;
const int LDRpin = A0;
void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  pinMode(LDRpin,INPUT);
}

void loop() {
  sensorLDR = analogRead(LDRpin);
  lcd.setCursor(1,0);
  lcd.print(sensorLDR);
  delay(1000);
  lcd.clear();
}
