// Pins
const int pirPin = 6; // Pin to which the PIR sensor output is connected
const int ledPin = 7; // LED

void setup() {
  pinMode(pirPin, INPUT); // PIR as input
  pinMode(ledPin, OUTPUT); // LED as output
  Serial.begin(9600); // Starting the serial monitor
}

void loop() {
  int motionDetected = digitalRead(pirPin); // Reading the PIR status

  if (motionDetected == HIGH) {
    Serial.println("Motion detected!");
    digitalWrite(ledPin, HIGH); // Turn on the LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
  }

  delay(100); // Small delay for stability
}
