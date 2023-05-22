int buttonPin = 2;
int transPin = 11;
boolean state = false;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(transPin, OUTPUT);
  

}

void loop() {
  if(digitalRead(buttonPin) == 1){
  if(state == false){
    digitalWrite(transPin, HIGH);
    state = true;
  }
  else{
    digitalWrite(transPin, LOW);
    state = false;
  }
  }
  delay(200);
}
