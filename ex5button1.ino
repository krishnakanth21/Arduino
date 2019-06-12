

const int buttonPin = 6;
const int buttonPin2 = 5;     
const int ledPin1 =  9;  
const int ledPin2 =  10;  
const int ledPin3 =  11;  
int ledstate1 = HIGH;
int ledstate2 = LOW;
int ledstate3 = LOW;



// variables will change:
int buttonState = 0;
int buttonState2 = 0;        
int lastbutton = 0;
int lastbutton2 = 0;




int ct=0;
int ct2=0;
void setup() {
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
   
  digitalWrite(ledPin1,ledstate1); 
  buttonState = digitalRead(buttonPin);  
  buttonState2 = digitalRead(buttonPin2);
  
   
 if (buttonState!=lastbutton) {
    
    
 if(buttonState==HIGH)
 { 
    ct=ct+1;
    Serial.println(ct);  
  if(ledstate1 == HIGH && ledstate2 == LOW && ledstate3 == LOW)
  {
    Serial.println("1st case!");
   ledstate1=LOW;
   ledstate2=HIGH;
   ledstate3=LOW; 

  
     
  }

 else if(ledstate1 == LOW && ledstate2 == HIGH && ledstate3 == LOW)
  {
    Serial.println("2ND case!");
   ledstate1=LOW;
   ledstate2=LOW;
   ledstate3=HIGH;    
    
  }

  else if(ledstate1 == LOW && ledstate2 == LOW && ledstate3 == HIGH)
  {
    Serial.println("3RD case!");
   ledstate1=HIGH;
   ledstate2=LOW;
   ledstate3=LOW;    
    
  }

  else
  {}
 }

 else
 {
  
 }
  

  
  digitalWrite(ledPin1,ledstate1);
  digitalWrite(ledPin2,ledstate2); 
  digitalWrite(ledPin3,ledstate3);    
    
  lastbutton = buttonState;  
  delay(50);
  }

  


   
if (buttonState2 != lastbutton2) {
    
    if (buttonState2 == HIGH) {
     
      ct2++;

      if(ledstate1 == HIGH && ledstate2 == LOW && ledstate3 == LOW)
  {
    Serial.println("1st case!");
   ledstate1=LOW;
   ledstate2=LOW;
   ledstate3=HIGH; 

  
     
  }

 else if(ledstate1 == LOW && ledstate2 == HIGH && ledstate3 == LOW)
  {
    Serial.println("2ND case!");
   ledstate1=HIGH;
   ledstate2=LOW;
   ledstate3=LOW;    
    
  }

  else if(ledstate1 == LOW && ledstate2 == LOW && ledstate3 == HIGH)
  {
    Serial.println("3RD case!");
   ledstate1=LOW;
   ledstate2=HIGH;
   ledstate3=LOW;    
    
  }
      

     

    
    }   

    
    else {
      
    }


  digitalWrite(ledPin1,ledstate1);
  digitalWrite(ledPin2,ledstate2); 
  digitalWrite(ledPin3,ledstate3);    
    
    
    delay(50);
    lastbutton2 = buttonState2;
  }


















  
}
