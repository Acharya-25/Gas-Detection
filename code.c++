// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int gassensor = 0;

Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd_1.begin(16, 2);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  gassensor = analogRead(A0);
  Serial.println(gassensor);
  lcd_1.setCursor(0, 0);
  lcd_1.print(gassensor);
  if (gassensor >= 500) {
    lcd_1.setCursor(0, 1);
    lcd_1.print("Gas Detected");
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(11, HIGH);
  } else {
    lcd_1.setCursor(0, 1);
    lcd_1.print("Gas is not Detected");
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}