// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

#define rightButton 9
int state =0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Electric Welding M/c");
  pinMode ( rightButton, INPUT_PULLUP );
  Serial.begin (9600);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  int btn = digitalRead(rightButton);
  if ( !btn ) {
     Serial.println ("button pressed");
     if(state == 5){
      state = 0;
     }
     delay(200);
     lcd.setCursor(0,1);
     lcd.print(state);
     lcd.setCursor ( 3,1 );
     if ( state == 0)  { lcd.clear(); lcd.setCursor(0,0);  lcd.print ( "Voltage"); }
     if ( state == 1)  { lcd.clear(); lcd.setCursor(0,0);  lcd.print ( "Successful Welds "); }
     if ( state == 2 ) { lcd.clear(); lcd.setCursor(0,0);  lcd.print ( "Set Weld Delay"); }
     if ( state == 3 ) { lcd.clear(); lcd.setCursor(0,0);  lcd.print ( "Date and Time"); }
     if ( state == 4 ) { lcd.clear(); lcd.setCursor(0,0);  lcd.print ( "Machine Uptime"); }
     if ( state == 5 ) { lcd.clear(); lcd.setCursor(0,0);  lcd.print ( "Charging Uptime"); }
     
     state++;
    
  }
 
}
