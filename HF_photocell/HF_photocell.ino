//#include <Servo.h>
//Servo myservo; 
const int ledPin = 13;
const int ledB = 12;
const int ledG = 8;
const int ledY = 7;
const int ldrPin = A0;

void setup() {
  // put your setup code here, to run once:
 // myservo.attach(11);
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
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

    digitalWrite(ledPin, HIGH);
    delay(50);
    Serial.println("LDR is DARK, LED is ON");
    
  }
  else{

    digitalWrite(ledPin, LOW);
    delay(50);
    Serial.println("--------------");
   
    }

    if(ldrStatus <=300){

      digitalWrite(ledB, HIGH);
      delay(50);
      Serial.println("LDR is DARK, LED is ON");
      
      }
      else if(ldrStatus <= 300){
        digitalWrite(ledB, LOW);
        delay(50);
        Serial.println("------------");

       
    }
    else if(ldrStatus <= 300){
        digitalWrite(ledG, HIGH);
        delay(50);
        Serial.println("LDR is DARK, LED is ON");
      }
      digitalWrite(ledG, LOW);
      delay(50);
      Serial.println("--------------");
      }
  
 /* myservo.write(0);
  delay(1000);

  myservo.write(10);
  delay(1000);

  myservo.write(20);
  delay(1000);

  myservo.write(30);
  delay(1000);


  myservo.write(40);
  delay(1000);

 myservo.write(50);
  delay(1000);

  myservo.write(60);
  delay(1000);


myservo.write(70);
  delay(1000);


myservo.write(80);
  delay(1000);


  myservo.write(90);
  delay(1000);


  myservo.write(100);
  delay(1000);

  myservo.write(110);
  delay(1000);

  myservo.write(120);
  delay(1000);

  myservo.write(130);
  delay(1000);


  myservo.write(140);
  delay(1000);


  myservo.write(150);
  delay(1000);

  myservo.write(160);
  delay(1000);

  myservo.write(170);
  delay(1000);

  myservo.write(180);
  delay(1000);

  
  sensorValue = analogRead(sensorPin);
  
  Serial.println(sensorValue);

  if(sensorValue>530) {
   myservo.write(0);
  digitalWrite(7,  HIGH);
  digitalWrite(8,  HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("---- 4 LEDS");
  }

  else if(sensorValue>470) {
   myservo.write(30);
  digitalWrite(7,  HIGH);
  digitalWrite(8,  HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("---- 4 LEDS");
  }

  else if(sensorValue>455) {
  digitalWrite(7,  HIGH);
  digitalWrite(8,  HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("---- 4 LEDS");
  Serial.println("---- 2 LEDS");
  }
  else if(sensorValue>400) {
  digitalWrite(7,  HIGH);
  digitalWrite(8,  HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("---- 4 LEDS");
  Serial.println("---- 3 LEDS");
  }

 else if(sensorValue>376) {
  digitalWrite(7,  HIGH);
  digitalWrite(8,  HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  Serial.println("---- 4 LEDS");
  }
/*
  else if(sensorValue>354) {
  digitalWrite(7,  HIGH);
  digitalWrite(8,  HIGH);
  digitalWrite(9,  HIGH); 
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  Serial.println("---- 5 LEDS");
  }

  else {
  digitalWrite(7,  HIGH);
  digitalWrite(8,  HIGH);
  digitalWrite(9,  HIGH); 
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  Serial.println("---- 6 LEDS");
  }*/
