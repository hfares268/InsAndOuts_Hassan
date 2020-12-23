byte val; // stores data received from serial port
const int LEDR = 13; // variable for which pin
const int LEDB = 12; // variable for which pin
const int LEDG = 8;
const int LEDY = 7;

void setup() {
  pinMode(LEDR, OUTPUT); // set pin as output
  pinMode(LEDB, OUTPUT); // set pin as output
  pinMode(LEDG, OUTPUT);
  pinMode(LEDY, OUTPUT);
  Serial.begin(9600); // Start serial communication at 9600 bps
}

void loop() {
  if (Serial.available()) { // If data is available to read
    val = Serial.read(); // read it and store it in val
  }
  if (val == 0) { // If 0 received
    digitalWrite(LEDR, LOW); // turn LEDs off
    digitalWrite(LEDG, HIGH);
  }
  else if (val == 1) { // If 1 received
    digitalWrite(LEDR, HIGH);
    digitalWrite(LEDB, LOW); // turn the LED at pin 1 on
    digitalWrite(LEDY, LOW); // other LED off
  }
  else if (val == 2) { // If 2 received
    digitalWrite(LEDB, HIGH); // turn the LED at pin 2 on
    digitalWrite(LEDY, HIGH); //other LED off
  }
  
  delay(10); // Wait 10 milliseconds
}
