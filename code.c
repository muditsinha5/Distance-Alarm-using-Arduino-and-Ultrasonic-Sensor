//code to interface ultrasonic sensor and to make Distance Alarm
int trigpin=12;int echopin=13;int led=10;int distance;int d;
void setup() {
  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(led,OUTPUT);// put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  distance=pulseIn(echopin,HIGH);
  d=0.034*distance/2;
  if(d<=15)
  {
  digitalWrite(led,HIGH);
  }
  else
  {
  digitalWrite(led,LOW);
  }
  // put your main code here, to run repeatedly:

}
