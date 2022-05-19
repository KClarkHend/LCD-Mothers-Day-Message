// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// make some custom characters:
byte Heart[8] = {
  B00000,
  B00000,
  B11011,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

void setup() 
{
  // initialize LCD and set up the number of columns and rows: 
  lcd.begin(16, 2);

  // create a new character
  lcd.createChar(0, Heart);


  // Clears the LCD screen
  lcd.clear();

  // Print a message to the lcd.
  lcd.print("Happy M-Day Ma!");
}

// Print All the custom characters
void loop() 
{ 
  lcd.setCursor(0, 1);
  lcd.write(byte(0));

      lcd.setCursor(2, 1);
  lcd.print("love you! -A+K");

}
