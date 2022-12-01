const int tombol = 3;
const int ledtest = 4;
int tomboltest = 0;
void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(ledtest, OUTPUT);
  pinMode(tombol, INPUT_PULLUP);
}

void loop() {
  tomboltest = digitalRead(tombol);
  if(tomboltest == HIGH){
    digitalWrite(ledtest,LOW);
    }
    else {
    digitalWrite(ledtest,HIGH);  
      }
      
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(1000);
   digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(1000);
   digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(1000);


  
}
