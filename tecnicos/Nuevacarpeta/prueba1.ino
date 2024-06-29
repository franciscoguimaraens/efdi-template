const int led = A1;
const int pot = A0;
int val = 0;

  void setup()
{
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(pot);
  analogWrite(led, val);
}