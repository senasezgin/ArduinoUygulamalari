int ldrPin=A0;
int ledPin=13;
int ldrValue = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  pinMode(ledPin, OUTPUT);
  //digitalWrite(optoPin,LOW);


}

void loop() {
  // put your main code here, to run repeatedly:
  ldrValue= analogRead(ldrPin);
  Serial.print(ldrValue);
  if(ldrValue<500){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
  
  }
