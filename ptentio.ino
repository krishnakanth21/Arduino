
 
#include <Servo.h> 

int potPin=0;
int servoPin = 9;

Servo Servo1;

void setup() {
  pinMode(potPin,INPUT);
  Servo1.attach(servoPin);
  Serial.begin(9600);

}
int value;
float v;
void loop(){
  value=analogRead(potPin);
  Serial.println(value);
  //delay(1000);
 /* Servo1.write(0);
  delay(1000);
  
  Servo1.write(90);
  delay(1000);
  
  Servo1.write(180);
  delay(1000);*/

 //values range=460 to 1030
  float y;
  //value=constrain(value,0,1023);
  
  y=(value*0.1759);
  Serial.println(y);
  Servo1.write(y);
 


}

  
