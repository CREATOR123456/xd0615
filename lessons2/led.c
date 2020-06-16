int i=0;
void setup()
{
  for(i=0;i<7;i++)
  {
  pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<7;i++)
  {
  digitalWrite(i, HIGH);
  delay(100);
  digitalWrite(6-i, HIGH);
  delay(100);
  digitalWrite(i, LOW);
  delay(100);
  digitalWrite(6-i, LOW);
  delay(100);
  }
}
