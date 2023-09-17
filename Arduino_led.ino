int LED = 11;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, LOW);
  delay(9600);
  digitalWrite(LED, HIGH);
  delay(16000);
  digitalWrite(LED, HIGH);
  delay(22000);
}

