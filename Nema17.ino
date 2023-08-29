#define dirPin 2
#define stepPin 3

void setup() {
 pinMode(stepPin, OUTPUT);
 pinMode(dirPin, OUTPUT);
 //Clockwise Direction
  digitalWrite(dirPin, HIGH);
}

void loop() {
   //1 Microstep or 200 pulses per revolution
  digitalWrite(stepPin, HIGH); 
  delayMicroseconds(500);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(500);
} 
