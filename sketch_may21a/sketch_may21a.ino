#include <IRremote.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
#define BUTON1 0xFFFFFF
#define BUTON2 0xFD807F
#define BUTON3 0xFD40BF
#define BUTON4 0xFD20DF
#define BUTON5 0xFDA05F
#define BUTON6 0xFD609F
#define BUTON7 0xFD10EF
#define BUTON8 0xFD906F
#define BUTON9 0xFD50AF
#define YILDIZ 0xFD30CF
#define BUTON0 0x409f50AF
#define YUKARI 0xFD8877
#define SOL 0xFD28D7
#define OK 0xFDA857
#define SAG 0xFD6897
#define ASAGI 0xFD9867


int led1 = 8;

void setup()
{
  pinMode(led1, OUTPUT);
 
  Serial.begin(9600);
  irrecv.enableIRIn();
}
void loop() {

  if (irrecv.decode(&results))
  {
    if (results.value == BUTON1)
    {
      digitalWrite(led1, !digitalRead(led1));
      if (digitalRead(led1) == HIGH)
      {
        Serial.println("LED 1 yandi");
      }
      else
      {
        Serial.println("LED 1 sondu");
      }
    }
   
    if (results.value == BUTON5)
    {
      digitalWrite(led1, HIGH);
      
      Serial.println("Tum LED'ler yandi");
    }
    irrecv.resume();
  }
}
