void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(3, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(3, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}
