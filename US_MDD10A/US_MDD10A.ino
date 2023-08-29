void setup (){
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);}

void loop(){
  
  float dur, dis;
   digitalWrite(13, LOW);
  delayMicroseconds(2);
   digitalWrite(13, HIGH);
  delayMicroseconds(10);
   digitalWrite(13, LOW);
  dur = pulseIn(12, HIGH);
  dis = (dur/2) * 0.034984; 
 
  int speed=map(dis, 5, 334, 0, 255);
  analogWrite(3, speed);
}
