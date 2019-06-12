int ledr=9;
int ledw=7;
int ledb=11;
int sensePin=A0;
void setup() {
  // put your setup code here, to run once:
 analogReference(DEFAULT);
 pinMode(sensePin,INPUT);
 pinMode(ledr,OUTPUT);
 pinMode(ledw,OUTPUT);
 pinMode(ledb,OUTPUT);
 Serial.begin(9600);
}
int value;
void loop() {
  // put your main code here, to run repeatedly:
     value=analogRead(sensePin);
     Serial.println(analogRead(sensePin));

     value=constrain(value,30,100);
     int ledlvl=map(value,30,100,0,255);


    if(ledlvl==255)
    {
      digitalWrite(ledr,HIGH);
      digitalWrite(ledw,LOW);
      digitalWrite(ledb,LOW);
    
    }

    else if(ledlvl==0)
    {
      digitalWrite(ledw,HIGH);
      digitalWrite(ledr,LOW);
      digitalWrite(ledb,LOW);  
    }
   
    else
    {
      digitalWrite(ledb,HIGH);
      digitalWrite(ledr,LOW);
      digitalWrite(ledw,LOW);   
    }
   




}
