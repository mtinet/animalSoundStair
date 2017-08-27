void setup() {
  for(int i = 4; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 4; i < 14; i++) {
    digitalWrite(i, HIGH);
  }
}
