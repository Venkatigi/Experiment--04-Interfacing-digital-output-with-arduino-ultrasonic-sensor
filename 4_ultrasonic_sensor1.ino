// C++ code
//
#define trigPin 10
#define echoPin 9

long dur;
int dis;


void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(trigPin, LOW);
  
  dur=pulseIn(echoPin,HIGH);
  
  dis=dur*0.034/2;
  
  Serial.print("Distance:  ");
  Serial.print(dis);
  Serial.print(" cm");
  

}