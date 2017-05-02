int m1pin = 3;
int m2pin = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1pin, OUTPUT);
  pinMode(m2pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(m1pin, 255);
  analogWrite(m2pin, 255);
  delay(1000);
  analogWrite(m1pin, 0);
  analogWrite(m2pin, 0);
  delay(1000);
}
