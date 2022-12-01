const int pinBuzzer = 8;
void setup() {
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  digitalWrite(pinBuzzer,HIGH);
  delay(100);
  digitalWrite(pinBuzzer,LOW);
  delay(100);

    digitalWrite(pinBuzzer,HIGH);
  delay(1000);
  digitalWrite(pinBuzzer,LOW);
  delay(1000);
}
