#include <LiquidCrystal.h>

// include the library code
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
//
char array1[]=" Sunfounder "; //the string to print on the LCD
char array2[]="hello, world! "; //the string to print on the LCD
int tim = 250; //the value of delay time, 500 for 250 ms or 2 for each 1 ms
// initialize the library with the numbers of the interface pins
LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display
//
void setup()
{
lcd.init(); //initialize the lcd
lcd.backlight(); //open the backlight
}
//
void loop()
{

lcd.setCursor(0,0); // set the cursor to column 15, line 0
for (int positionCounter1 = 0; positionCounter1 < 12; positionCounter1++)
{
lcd.print(array1[positionCounter1]); // Print a message to the LCD.
}
//lcd.clear(); //Clears the LCD screen and positions the cursor in the upper-left corner.
lcd.setCursor(0,1); // set the cursor to column 15, line 1
for (int positionCounter = 0; positionCounter < 14; positionCounter++)
{
//lcd.scrollDisplayLeft(); //Scrolls the contents of the display one space to the left.
lcd.print(array2[positionCounter]); // Print a message to the LCD.
 //wait for tim which is set above
}
delay(1000);
lcd.clear(); //Clears the LCD screen and positions the cursor in the upper-left corner.
}
