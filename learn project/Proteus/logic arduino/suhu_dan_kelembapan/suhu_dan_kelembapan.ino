#include <LiquidCrystal.h>
#include "DHT.h"
#define DHTPIN A0
#define DHTTYPE DHT11
LiquidCrystal lcd(7,6,5,4,3,2);
DHT dht(DHTPIN,DHTTYPE);
float t;
float h;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
   delay(2000);
   t = dht.readTemperature();
   h = dht.readHumidity();

  lcd.setCursor(0,0);
   lcd.print("Suhu: ");
   lcd.print(t);
   lcd.print("*C");
  lcd.setCursor(0,1);
   lcd.print("Kelembapan: ");
   lcd.print(h);
   lcd.print("%\t");

//   Serial.print("Suhu: ");
//   Serial.print(t);
//   Serial.print("C");
//   Serial.print("Lembab: ");
//   Serial.print(h);
//   Serial.print("%\t");
   delay(100);
}
