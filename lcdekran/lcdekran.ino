#include <LiquidCrystal_I2C.h>


#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f, 16, 2); // Bu kodu kullanırken ekranda yazı çıkmaz ise 0x27 yerine 0x3f yazınız !!
void setup() {
  lcd.begin();

}

void loop() {
 lcd.setCursor(6,0); // İlk satırın başlangıç noktası
 lcd.print("Sena");
 lcd.setCursor(8,1); // İkinci satırın başlangıç noktası
 lcd.print("Sezgin");
 delay(1000);

 lcd.clear();
}