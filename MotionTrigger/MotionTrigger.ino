// Pins
const int pirPin = 6; // Pin to which the PIR sensor output is connected
const int ledPin = 7; // LED

void setup() {
  pinMode(pirPin, INPUT); // PIR as input
  pinMode(ledPin, OUTPUT); // LED as output
  Serial.begin(9600); // Starting the serial monitor
}

void loop() {
  int motion = digitalRead(pirPin);
  digitalWrite(ledPin, motion);
  delay(100);
}
