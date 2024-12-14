
int ldrPin=A0;
int ldrVal = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrVal = analogRead(ldrPin);
  Serial.println(ldrVal);

  delay(100);
}
