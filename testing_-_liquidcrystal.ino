#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 4); 
int ctr = 0;


// ============================
// Start
// ============================
void setup() {
  // init lcd
  lcd.begin(16, 4); //initialize the lcd
  lcd.backlight(); //open the backlight 
}


// ============================
// Loop
// ============================
void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);        
  lcd.print("Testing row1"); 
  lcd.setCursor(0, 1);        
  lcd.print("Testing row2"); 
  lcd.setCursor(0, 2);        
  lcd.print("Testing row3"); 
  lcd.setCursor(0, 3);        
  lcd.print("Testing row4 " + String(ctr)); 
  delay(1000);
  ctr++;
}
