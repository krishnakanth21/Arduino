

const int buttonPin = 6;     
const int ledPin1 =  9;  
const int ledPin2 =  10;  
const int ledPin3 =  11;  

// variables will change:
int buttonState = 0;        
int lastbutton = 0;
int ct=0;
void setup() {
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  buttonState = digitalRead(buttonPin);
  if(buttonState!=lastbutton)
  {
   if(buttonState==HIGH)
   {
     ct=ct+1;
     if(ct>=8)
     {ct=0;}
     else
     {Serial.println(ct); }  
     
   }
   else
   {}
  
  
  delay(50);
    lastbutton=buttonState;
  }
  

  
  /*if (buttonState == HIGH) {
    
    digitalWrite(ledPin, HIGH);
  } else {
   
    digitalWrite(ledPin, LOW);
  }*/
 
  if(ct==0)
  { 
   digitalWrite(ledPin1,LOW);
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin3,LOW);
     
  }

  else if(ct==1)
  { 
   digitalWrite(ledPin1,LOW);
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin3,HIGH);

     
  }

  else if(ct==2)
  { 
   digitalWrite(ledPin1,LOW);
   digitalWrite(ledPin2,HIGH);
   digitalWrite(ledPin3,LOW);

     
  }
  
  else if(ct==3)
  { 
   digitalWrite(ledPin1,LOW);
   digitalWrite(ledPin2,HIGH);
   digitalWrite(ledPin3,HIGH);

     
  }

  else if(ct==4)
  { 
   digitalWrite(ledPin1,HIGH);
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin3,LOW);
     
  }

  else if(ct==5)
  { 
   digitalWrite(ledPin1,HIGH);
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin3,HIGH);
     
  }

  else if(ct==6)
  { 
   digitalWrite(ledPin1,HIGH);
   digitalWrite(ledPin2,HIGH);
   digitalWrite(ledPin3,LOW);
     
  }

  else if(ct==7)
  { 
   digitalWrite(ledPin1,HIGH);
   digitalWrite(ledPin2,HIGH);
   digitalWrite(ledPin3,HIGH);
     
  }

  else
  {
     
   
   digitalWrite(ledPin1,LOW);
   digitalWrite(ledPin2,LOW);
   digitalWrite(ledPin3,LOW);
     
  
    
    
  }
  
  
}

/*

const int  buttonPin = 6;    // the pin that the pushbutton is attached to
const int ledPin = 9;       // the pin that the LED is attached to
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
 /* if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } 
    else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;
 */

  // turns on the LED every four button pushes by checking the modulo of the
  // button push counter. the modulo function gives you the remainder of the
  // division of two numbers:
/*  if (buttonPushCounter % 4 == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
*/
