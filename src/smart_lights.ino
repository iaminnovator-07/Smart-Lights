int ldr = A0;
int led = 13;

void setup() {

  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int ldrValue = analogRead(ldr);

  Serial.println(ldrValue);

  if (ldrValue < 500) {

    digitalWrite(led, HIGH);

  } else {

    digitalWrite(led, LOW);

  }

  delay(100);
}
