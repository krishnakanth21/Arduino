int led1=9;
int led2=10;
int led3=11;
unsigned long time1=0;
unsigned long time2=0;
unsigned long time3=0;
int period1=100;
int period2=1000;
int period3=5000;
boolean ledstate1=false;
boolean ledstate2=false;
boolean ledstate3=false;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:



  unsigned long timec=millis();

  while((unsigned long)timec-time1>=period1)
  { 
    ledstate1=!ledstate1;
    digitalWrite(led1,ledstate1);
    time1=millis();    
  }

  
  while((unsigned long)timec-time2>=period2)
  { 
    ledstate2=!ledstate2;
    digitalWrite(led2,ledstate2);
    time2=millis();
  }

  
  while((unsigned long)timec-time3>=period3)
  { 
    ledstate3=!ledstate3;
    digitalWrite(led3,ledstate3);
    time3=millis();
  }
 

  

}
