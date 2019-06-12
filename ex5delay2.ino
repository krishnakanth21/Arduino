
int ledPin1=9;
int ledPin2=10;
int ledPin3=11;
int value1=0;
int value2=0;
int value3=0;
int ledState1 = LOW;  
int ledState2 = LOW;      
int ledState3 = LOW;  
int j1=0;
int j2=0;
int j3=0;       
unsigned long previousMillis = 0; 
unsigned long previousMillis1 = 0; 
unsigned long previousMillis2 = 0; 
unsigned long previousMillis3 = 0; 
unsigned long timec = 0;       
unsigned long period=10000;
unsigned long timect=0;
String s;


void setup() {

  analogReference(DEFAULT);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  Serial.begin(9600);  
  
 

}

void loop() {

 timec=millis();

 
 if(Serial.available()>0)
 {
 s=Serial.readString();
 Serial.println(s);

String s1="";
String s2="";
String s3="";


   int len=s.length();
  Serial.println(len);
 
 for(int i=0;i<len;i++)
 {
  
  if(isDigit(s[i]) && s[i-1]!='l')
  {  
   if(s[i+1]==' ')
   { 
    s1=s1+s[i];
    j1=i+2;
    break;
   }
  else    
   {s1=s1+s[i];  } 
  }  
  
 }

 Serial.println(s1);
 value1=s1.toInt();
 Serial.println(value1);
 Serial.println(j1);

 for(int k=j1;k<len;k++)
 {

  if(isDigit(s[k]) && s[k-1]!='l')
  {  
   if(s[k+1]==' ')
   { 
    s2=s2+s[k];
    j2=k+2;
    break;
   }
  else    
   {s2=s2+s[k];  } 
  }    
 }

 Serial.println(s2);
 value2=s2.toInt();
 Serial.println(value2);
 Serial.println(j2);

 for(int h=j2;h<len;h++)
 {
   if(isDigit(s[h]) && s[h-1]!='l')
  {  
   if(s[h+1]==' ')
   { 
    s3=s3+s[h];
    
    break;
   }
  else    
   {s3=s3+s[h];  } 
  }  

  
 }
 
 Serial.println(s3);
 value3=s3.toInt();
 Serial.println(value3);
 

 
  
 



 
 }
 //int x=timec%period;




  
  if (timec - previousMillis1 >= value1) {
    
    previousMillis1 = timec;

    if (ledState1 == LOW) {
      ledState1 = HIGH;
    } else {
      ledState1 = LOW;
    }    
    digitalWrite(ledPin1, ledState1);
  }

   if (timec - previousMillis2 >= value2) {
    
    previousMillis2 = timec;

    if (ledState2 == LOW) {
      ledState2 = HIGH;
    } else {
      ledState2 = LOW;
    }    
    digitalWrite(ledPin2, ledState2);
  }

   if (timec - previousMillis3 >= value3) {
    
    previousMillis3 = timec;

    if (ledState3 == LOW) {
      ledState3 = HIGH;
    } else {
      ledState3 = LOW;
    }    
    digitalWrite(ledPin3, ledState3);
  }

 
 
  


}
