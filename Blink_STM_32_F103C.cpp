
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin PB1 as an output.
  pinMode(PB1, OUTPUT);
  pinMode(PA1, OUTPUT);
  pinMode(PA2, OUTPUT);
  pinMode(PA3, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(PB1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(PB1, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
  // A1
  digitalWrite(PA1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(PA1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
    // A2
  digitalWrite(PA2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);              // wait for a second
  digitalWrite(PA2, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);
    // A3
  digitalWrite(PA3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);              // wait for a second
  digitalWrite(PA3, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);
}