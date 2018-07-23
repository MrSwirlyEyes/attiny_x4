// Trivial program to test the ATtinyX4.
//
// Toggles LED on and off for a fixed period of time.
//  Typical blink sketch.


#define led 5

void setup() {
  // Initialize ATtinyX4 digital physical pin 8
  //	(programming pin 5) as an output.
  pinMode(led, OUTPUT);
}

void loop() {
  // Toggle LED on
  digitalWrite(led, HIGH);
  delay(1000);

  // Toggle LED off
  digitalWrite(led, LOW);
  delay(1000);
}
