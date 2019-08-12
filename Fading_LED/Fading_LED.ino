int led=9;
int fed=10;
int brightness=0;
int f=255;
int fadeAmount = 5;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(fed,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(led,brightness);
  analogWrite(fed,f);
  f=f-fadeAmount;
  brightness=brightness+fadeAmount;
  if(brightness==0||brightness==255)
  {fadeAmount=-fadeAmount;delay(2000);}
  delay();
  // put your main code here, to run repeatedly:

}
