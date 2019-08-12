#define trigPin 13
#define echoPin 12

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration , distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration = pulseIn(echoPin,HIGH);
  distance=(duration/2)/29.1;

  if(distance>=200||distance<=0)
  {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
    if(distance<=10){
      digitalWrite(2,HIGH);
      delay(1000);
      digitalWrite(2,LOW);
    }
    else if(distance<=30)
    {
      digitalWrite(3,HIGH);
      
      delay(1000);
      digitalWrite(3,LOW);
    }
  }
  delay(500);

}
