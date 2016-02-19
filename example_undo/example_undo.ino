const int IN1=3;
const int IN2=5;
const int IN3=6;
const int IN4=9;
void setup() {
  // fIRST , define the Motor's pin as an OUTPUT
pinMode( IN1 ,OUTPUT);// Right Motor 1st wire
pinMode( IN2 ,OUTPUT);// Right Motor 2nd wire
pinMode( IN3 ,OUTPUT);// left Motor 1st wire
pinMode( IN4 ,OUTPUT);// left Motor 2nd wire

}
void forward(int Speed){
  //When we want to let Motor To Rotate clock wise
  // just void this part on the loop section .
 
  analogWrite(IN1,0);
  analogWrite(IN2,Speed);
  analogWrite(IN3,Speed);
  analogWrite(IN4,0);
}
void backward(int Speed){
  //When we want to let Motor To Rotate Counter clock wise
  // just void this part on the loop section .
  analogWrite(IN1,Speed);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,Speed);
}
void left(int Speed){
  //When we want to let Motor To Rotate Counter clock wise
  // just void this part on the loop section .
  analogWrite(IN1,0);
  analogWrite(IN2,Speed);
  analogWrite(IN3,0);
  analogWrite(IN4,Speed);
}
void right(int Speed){
  //When we want to let Motor To Rotate Counter clock wise
  // just void this part on the loop section .
  analogWrite(IN1,Speed);
  analogWrite(IN2,0);
  analogWrite(IN3,Speed);
  analogWrite(IN4,0);
}

void Stop(){
  //When we want to let Motor To Rotate clock wise
  // just void this part on the loop section .
  analogWrite(IN1,0);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,0);
}

void loop() {
 //Rise Up
 forward(200);delay(500);
 backward(200);delay(500);
 left(200);delay(500);
 right(200);delay(500);
 Stop();delay(500);
}
