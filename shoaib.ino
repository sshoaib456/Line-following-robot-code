#define leftMotorForward 3
#define LeftMotorReverse 5
#define RightMotorforward 6
#define RightMotorReverse 9

#define leftIR A0
#define rightIR A1

void setup() {
pinMode(LeftMotorForward, OUTPUT);
pinMode(RightMotorForward, OUTPUT);
pinMode(LeftMotorReverse, OUTPUT);
pinMode(RightMotorReverse, OUTPUT);
pinMode(LeftIr, INPUT);
pinMode(rightIR, INPUT);
}

void loop() {
  if (digitalRead(LeftIR) < 500 && analogRead(rightIR) < 500)  //Forward
  {
    digitalWrite(leftMotorForward, HIGH);
    digitalWrite(RightMotorForward, HIGH);
  }

  else if (analogRead(leftIR) >== 500  && digitalRead(rightIR) < 500 //Left
  {
    analogWrite(LeftMotorForward , LOW);
    analogWrite(RightMotorForward, 130);
  }
  else
  {
    analogWrite(leftMotorForward, Low);
    analogWrite(RightMotorForward, low);
  }
   delay(1);
 } 
  }
  

}
