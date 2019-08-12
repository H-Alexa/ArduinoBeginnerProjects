int potPin=0;
int led=11;
int potVal=0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  potVal=analogRead(potPin);
  int mapped=map(potVal,0,1023,0,255);
  Serial.print(potVal);
  Serial.print(" - ");
  Serial.println(mapped);
  analogWrite(led,mapped);
  delay(10);
}
