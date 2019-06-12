const int sensePin =A0;
int led1=9;
int led2=10;
int led3=11;

void setup() {
  analogReference(DEFAULT);
  pinMode(sensePin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);
}
int integerValue=0; 

int len;
byte c; String a;

 
void loop() {
  
    if(Serial.available()>0)
   {
    /*integerValue=Serial.readStringUntil('\n').toInt(); 
    Serial.println(integerValue);
    analogWrite(ledp,integerValue);*/

    a=Serial.readStringUntil('\n');   
    
    //Serial.println(a);
    len=a.length();
    Serial.println(len);
    int cts=0;
    int cti=0;
    
    for(int i=0;i<len;i++)
    {
      if(isAlpha(a[i]))
      {cts=cts+1;}      
      
    }
   // Serial.println(ct);
    if(cts==len && len>=5)
    {Serial.println("Its a string!");
    digitalWrite(led1,HIGH);
    //delay(1000);
    //digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    }
    else
    {
        for(int i=0;i<len;i++)
         {
          if(isDigit(a[i]))
           {cti=cti+1;}      
      
        }

        if(cti==len)
        {Serial.println("Its a number!");
            digitalWrite(led2,HIGH);
            //delay(1000);
            //digitalWrite(led2,LOW);
            digitalWrite(led1,LOW);
            digitalWrite(led3,LOW);
        }
        else
        {Serial.println("Invalid");
             digitalWrite(led3,HIGH);
             //delay(1000);
             //digitalWrite(led3,LOW);
             digitalWrite(led1,LOW);
             digitalWrite(led2,LOW);
        
        }
    
    }
    
    
   }
    
  
}
