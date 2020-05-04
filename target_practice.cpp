

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int hit_button = 7;
int miss_button = 8;
int hit_count = 0;
int miss_count = 0;
int total_shots = 0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

void loop() {
  lcd.setCursor(0, 1);
//  To be used in future iterations for timed target practice
// print the number of seconds since reset:
//  lcd.print(millis() / 1000);

  if (digitalRead(hit_button) == HIGH){
    lcd.setCursor(0,0);
    hit_count++;
    total_shots = hit_count + miss_count;


    lcd.print(String("Hits: ") + String(hit_count) + String(" of ") + String(total_shots) + String(" Shots"));

    while(digitalRead(hit_button)== HIGH);
    delay(2000);
  }

  if (digitalRead(miss_button) == HIGH){
    lcd.setCursor(0,0);
    miss_count++;
    total_shots = hit_count + miss_count;

    lcd.print(String("Hits: ") + String(hit_count) + String(" of ") + String(total_shots) + String(" Shots"));

    while(digitalRead(miss_button)== HIGH);
    delay(2000);
  }
}
