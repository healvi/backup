
#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
  
#include <HCSR04.h>
UltraSonicDistanceSensor distanceSensor(10, 11);  
float jarak;
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
   delay(2000);
   jarak = distanceSensor.measureDistanceCm();
  lcd.setCursor(0,0);
   lcd.print("Jarak");
   lcd.setCursor(0,1);
   lcd.print(jarak);
   lcd.print(" Cm");
   delay(1000);
}
