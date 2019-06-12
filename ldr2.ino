/*void setup()
{

  Serial.begin(9600);
}
int b;

void loop()
{
 while(Serial.available()==0);

 b=Serial.parseInt();
 
 Serial.println(b);
 
 Serial.flush(); 
}*/
const int sensePin =A0;
int ledp=11;

void setup() {
  analogReference(DEFAULT);
  pinMode(sensePin,INPUT);
  pinMode(ledp,OUTPUT);
  Serial.begin(9600);
}
int integerValue=0;  
char incomingByte;
 
void loop() {
  /*if (Serial.available() > 0) {   // something came across serial
    integerValue = 0;         // throw away previous integerValue
    while(1) {            // force into a loop until 'n' is received
      incomingByte = Serial.read();
      if (incomingByte == '\n') break;   // exit the while(1), we're done receiving
      if (incomingByte == -1) continue;  // if no characters are in the buffer read() returns -1
      integerValue *= 10;  // shift left 1 decimal place
      // convert ASCII to integer, add, and shift left 1 decimal place
      integerValue = ((incomingByte - 48) + integerValue);
    }*/
    if(Serial.available()>0)
   {
    integerValue=Serial.readStringUntil('\n').toInt();
 
    Serial.println(integerValue);   // Do something with the value

    analogWrite(ledp,integerValue);
   }
    
  
}
