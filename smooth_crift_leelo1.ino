#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int force=A0;
int Reading=0;

void setup() {
lcd.init();
lcd.backlight();
lcd.print("Loading Force...");
delay(1000);
lcd.clear();

pinMode(force,INPUT);
}

void loop() {
 Reading=map(Reading,0,10,0,466);
 Reading=analogRead(A0);
  lcd.setCursor(0,0);
 lcd.print("Reading = ");
 lcd.setCursor(10,0);
lcd.print(Reading);
lcd.print("    ");



}