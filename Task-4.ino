void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(13, 1);
   delay(1000);
  digitalWrite(13, 0);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, 1);
   delay(1000);
  digitalWrite(8, 0);
  delay(1000); // Wait for 1000 millisecond(s)
