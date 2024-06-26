#include <liquidCrystal_I2C.h> 

const int led1Pin = 12; 
const int led2Pin = 13; 
const int pirPin = 2:   

LiquidCrystal_I2C lcd(0x27, 16, 2) 

void setup() { 
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(led1Pin, OUTPUT); 
 pinMode(led2Pin, OUTPUT); 
 pinMode(pirPin, INPUT);   
 lcd.init();               
 lcd.backlight()           
}

void loop() { 
   // put your main code here, to run repeatedly:

