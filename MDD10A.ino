
int pwm_right=3;
int dir_right=4;

  void setup(){
  pinMode(dir_right, OUTPUT);
  pinMode(pwm_right, OUTPUT);
  Serial.begin(9600);
  analogWrite(pwm_right, LOW);
  delay(1000);
}

void loop()
{
    while(Serial.available()){
    String val1 = Serial.readString();
    int val = val1.toInt();

      if (val>-255 && val<0){
      analogWrite(pwm_right,(-1*val));
      digitalWrite(dir_right, LOW);
      Serial.println("ANTI-CLOCKWISE");
      Serial.println(val);
      }
      else if(val>0 && val<255){
      analogWrite(pwm_right, val);
      digitalWrite(dir_right, HIGH);
      Serial.println("CLOCKWISE");
      Serial.println(val);
      }
       else if(val<-255 || val>255){
       analogWrite(pwm_right, 0);
       Serial.println("INVALID OUTPUT");
       Serial.println(val);
     
      }
      else if(val==-255 || val==255 || val==0){
      analogWrite(pwm_right, 0);
      Serial.println("STOP");
       Serial.println(val);
      }
      }
}
