/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int LED =  13;      // the number of the LED pin
const int LEDB = 12;
const int LEDG = 8;
const int LEDY = 7;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(LED, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDY, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  delay(20);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(LED, HIGH);
    delay(100);
    
    digitalWrite(LEDB, HIGH);
    delay(80);


    digitalWrite(LEDG, HIGH);
    delay(300);

    digitalWrite(LEDY, HIGH);
    delay(400);

    digitalWrite(LEDB, HIGH);
    delay(300);
    
  } else {
    // turn LED off:
    digitalWrite(LED, LOW);
    delay(200);

    digitalWrite(LEDB, LOW);
    delay(100);

    digitalWrite(LEDG, LOW);
    delay(370);

    digitalWrite(LEDY, LOW);
    delay(400);
  }
}
