const int sensePin =A0;
int ledp=9;
void setup() {
  // put your setup code here, to run once:
  analogReference(DEFAULT);
  pinMode(sensePin,INPUT);
  pinMode(ledp,OUTPUT);
  Serial.begin(9600);
}

/*void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(sensePin);
  Serial.println(analogRead(sensePin));
  if(value<50)
  {digitalWrite(ledp,HIGH);}
  else
  {digitalWrite(ledp,LOW);}
   
}*/

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(sensePin);
  Serial.println(analogRead(sensePin));

  value=constrain(value,25,45);
  int ledlvl=map(value,25,45,255,0);
  
  analogWrite(ledp,ledlvl); 
}
/*int sensorPin = A0; // select the input pin for LDR

int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600); //sets serial port for communication
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

delay(100);

}*/
