void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop()
{
  digitalWrite(6, HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
