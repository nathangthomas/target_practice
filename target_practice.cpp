#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int hit_button = 7;
int miss_button = 8;
int hit_count = 0;
int miss_count = 0;
int total_shots = 0;
int Green = 6;
int Red = 9;
int White = 10;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(7, INPUT);
  pinMode(8, INPUT);

  lcd.setCursor(4, 0);
  lcd.print("Welcome To");

  lcd.setCursor(2, 1);
  lcd.print("Target Practice");
  delay(4000);

 lcd.setCursor(1,0);
 lcd.print(String("Hits: ") + String(hit_count) + String("          "));
 lcd.setCursor(1,1);
 lcd.print(String("Total Shots: ") + String(total_shots) + String("          "));

// controls leds
 Serial.begin(9600);
 pinMode(Green, OUTPUT);
 digitalWrite(Green, LOW);
 pinMode(Red, OUTPUT);
 digitalWrite(Red, LOW);
 pinMode(White, OUTPUT);
 digitalWrite(White, LOW);

}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
//  To be used in future iterations for timed target practice
// print the number of seconds since reset:
//  lcd.print(millis() / 1000);

//    if (count == 0){
//      lcd.print(String("Target Practice"));
//    }
//

  if (digitalRead(hit_button) == LOW && digitalRead(miss_button) == LOW){
    digitalWrite(White, HIGH);
  } else {
    digitalWrite(White, LOW);
  }

  if (digitalRead(hit_button) == HIGH){
    hit_count++;
    total_shots = hit_count + miss_count;

     lcd.setCursor(1,0);
     lcd.print(String("Hits: ") + String(hit_count) + String("          "));
     lcd.setCursor(1,1);
     lcd.print(String("Total Shots: ") + String(total_shots) + String("          "));

      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(500);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(500);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(100);
      digitalWrite(Green, LOW);
      delay(100);
      digitalWrite(Green, HIGH);
      delay(1000);
      digitalWrite(Green, LOW);

      while(digitalRead(hit_button)== HIGH);
  }

   if (digitalRead(miss_button) == HIGH){
      lcd.setCursor(0,0);
      miss_count++;
      total_shots = hit_count + miss_count;

      lcd.setCursor(1,0);
      lcd.print(String("Hits: ") + String(hit_count) + String("          "));
      lcd.setCursor(1,1);
      lcd.print(String("Total Shots: ") + String(total_shots) + String("          "));

      digitalWrite(Red, HIGH);
      delay(1000);
      digitalWrite(Red, LOW);
      delay(100);
      digitalWrite(Red, HIGH);
      delay(1000);
      digitalWrite(Red, LOW);
      delay(100);
      digitalWrite(Red, HIGH);
      delay(1000);
      digitalWrite(Red, LOW);
      delay(100);
      digitalWrite(Red, HIGH);
      delay(100);
      digitalWrite(Red, LOW);
      delay(100);
      digitalWrite(Red, HIGH);
      delay(1000);
      digitalWrite(Red, LOW);

      while(digitalRead(miss_button)== HIGH);
    }

}
