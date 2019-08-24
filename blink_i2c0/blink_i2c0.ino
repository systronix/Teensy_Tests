/*
  Blink
  Toggle i2c0 pins to debug issues where they are stuck after assembling Teensy 3.2 into BBR4
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
int led = 13;
int scl0 = 19;
int sda0 = 18;
int wait = 10;	// milliseconds

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);   
  pinMode(scl0, OUTPUT);
  pinMode(sda0, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wait/10);
  digitalWrite(scl0, LOW);
  delay(wait/10);
  digitalWrite(sda0, HIGH);

  delay(wait/5);               // wait for a second

  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(scl0, HIGH);
  delay(wait/10);
  digitalWrite(sda0, LOW);
  delay(wait/2);               // wait for a second
}