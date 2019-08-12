const int led=9;
const int input=2;
int brightness=0;
int fadeamount=5;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(input,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val=digitalRead(input);
  while(val==HIGH){
    analogWrite(led,brightness);
    brightness=brightness+fadeamount;
    if(brightness==0||brightness==255)
    {fadeamount=-fadeamount;}
    delay(100);
    val=digitalRead(input);
  } 
    digitalWrite(led,LOW);
  

}
