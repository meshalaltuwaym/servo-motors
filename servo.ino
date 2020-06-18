#include <Servo.h>

Servo  moto1;
Servo  moto2;
void setup(){
  
  moto1.attach(2); //motor1 connected to pin2 arduino
  
  moto2.attach(4);   //motor2 connected to pin4 arduino
}
void loop(){
  
  moto1.write(360); //motor1 will rotate at 360 degree
  moto2.write(360);   //motor2 will rotate at 360 degree
  
  delay(2000);
                       //all the motors will go back at the start point
  moto1.write(0);
 moto2.write(0);
    delay(2000);
}
