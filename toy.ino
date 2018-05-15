//NEEDS DEBOUNCE ADDED

#include <Servo.h>
Servo myservo; //creates a servo object
int pir = 12; //digital pin connected to the PIR's output
void setup(){
myservo.attach(4); //attaches servo to pin 4
pinMode(pir, INPUT);
}
void loop(){
if(digitalRead(pir) == HIGH){ 
myservo.write(170); //to make the servo go faster, decrease the time in delays for
delay(100000); //to make it go slower, increase the number.
}
if(digitalRead(pir) == LOW){
myservo.write(0); //to make the servo go faster, decrease the time in delays for
delay(5); //to make it go slower, increase the number.
}
}
