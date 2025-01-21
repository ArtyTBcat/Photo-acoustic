#include <Servo.h>

Servo myServo;
byte servoPin = 6;

void setup() {
   myServo.attach(servoPin);
   
  //  myServo.writeMicroseconds(700);
}

void loop() {S
  for (int i =0; i <400; i+=1){
    myServo.write(140);
    delay(1000);
    myServo.write(90);
    delay(1000);
    myServo.write(40);
    delay(1000);
    myServo.write(90);
    delay(1000);
  }
  while (1){
    myServo.write(90);
  }

  
}