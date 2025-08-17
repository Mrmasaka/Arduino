// 02 Button LED
// Pressing the button on pin 2 will turn LED on pin 13 on/off
const int buttonPin = 2;     // push button connected to digital pin 2
const int ledPin = 13;       // LED connected to digital pin 13
int buttonState = 0;         // variable to store button status
void setup() {
  pinMode(buttonPin, INPUT);   // set button pin as input
  pinMode(ledPin, OUTPUT);     // set LED pin as output
}
void loop() {
  buttonState = digitalRead(buttonPin);  // read button
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // LED ON
  } else {
    digitalWrite(ledPin, LOW);  // LED OFF
  }
}
