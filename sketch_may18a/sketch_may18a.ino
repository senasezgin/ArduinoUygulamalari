const int buton = 3;
int durum;

void setup() {
  // put your setup code here, to run once:
  pinMode(buton, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  durum = digitalRead(buton);

  while( durum == HIGH )
  {
    digitalWrite(5, HIGH);
    delay(500);
    digitalWrite(5, LOW);
    delay(500);
    durum = digitalRead(buton);

  }

 Serial.println("Butona basılmıyor");
 delay(500);


}
