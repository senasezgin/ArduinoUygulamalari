#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,16,2); // Bu kodu kullanırken ekranda yazı çıkmaz ise 0x27 yerine 0x3f yazınız !!
void setup() {
  lcd.begin();

}

void loop(){
int i;
lcd.setCursor(3,0); // İlk satırın başlangıç noktası
lcd.print("Seni"); 
for(i=0; i<17; i++)
{
  lcd.setCursor(i,1); // İkinci satırın başlangıç noktası, for döngüsü sayesinde bu sütun sürekli kayacaktır
  lcd.print("Seviyorum");
  delay(300);
  lcd.setCursor(i,1);
  lcd.print(" ");
}
}