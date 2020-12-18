//#include <Servo.h>
//Servo myservo; 
const int ledR = 13;
const int ledB = 12;
const int ledG = 8;
const int ledY = 7;
const int ldrPin = A0;

void setup() {
  // put your setup code here, to run once:
 // myservo.attach(11);
    Serial.begin(9600);
    pinMode(ledR, OUTPUT);
    pinMode(ledB, OUTPUT); 
    pinMode(ledG, OUTPUT);
    pinMode(ledY, OUTPUT);
    pinMode(ldrPin, INPUT);   
    /*
    pinMode(8, OUTPUT); 
    pinMode(7, OUTPUT);
    pinMode(12, OUTPUT);
    */
}
void loop() {
  // put your main code here, to run repeatedly:

  int ldrStatus = analogRead(ldrPin);

  if(ldrStatus <= 300){

    digitalWrite(ledR, HIGH);
    delay(100);
    digitalWrite(ledB,HIGH);
    delay(100);
    digitalWrite(ledG,HIGH);
    delay(100);
    digitalWrite(ledY,HIGH);
    delay(100);
    Serial.println("LDR is DARK, LED is ON");
    
  }
  else if(ldrStatus > 300){

    digitalWrite(ledR, LOW);
    delay(100);
    digitalWrite(ledB, LOW);
    delay(100);
    digitalWrite(ledG,HIGH);
    delay(100);
    digitalWrite(ledY,HIGH);
    delay(100);
    Serial.println("--------------");
   
  }
 } 


  
 
