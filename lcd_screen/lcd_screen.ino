#include <LiquidCrystal.h> //Load the LCD library
LiquidCrystal lcd(12, 11, 6, 5, 4, 3); //In this line we define which pins on
//the microcontroller get connected to the LCD (Better don't change yet).

void setup() {
  lcd.begin(16, 2); //In the setup we indicate how many signs and how many rows
  //we are using. In this case: 16 signs in two rows.
}

void loop() {
  lcd.setCursor(0, 0); //Start position of the cursor on the LCD (0,0 = first
  //character in the first row).
  lcd.print("www.funduino.de"); // Write the text “www.funduino.de”
  lcd.setCursor(0, 1); //Start position of the cursor on the LCD (0,0 = first
  //character in the second row).
  lcd.print("good luck!!!"); // Write the text “good luck!!!”.
}
