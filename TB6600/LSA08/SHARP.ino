#define sensor A0 // (4-30cm, analog)

void setup() {
  Serial.begin(9600); 
}

void loop() {
  
  // 
  //Serial.println(analogRead(sensor));
  float volts = analogRead(sensor)*0.0048828125;  // value from sensor * (5/1024)
  Serial.println( volts);                                                                                                   
  int distance = 13*pow(volts, -1); 
  delay(1000); 
  
  if (distance <= 30){
    Serial.println(distance );   // print the distance
  }
}
