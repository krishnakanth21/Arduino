
int ledp=9;
int value;
int ledState = LOW;            
unsigned long previousMillis = 0; 
unsigned long previousMillis1 = 0; 
unsigned long timec = 0;       
unsigned long period=10000;
void setup() {

  analogReference(DEFAULT);
  pinMode(ledp,OUTPUT);
  Serial.begin(9600);  
  
 

}

void loop() {

 timec=millis();
 if(Serial.available()>0)
 {
 
 value=Serial.readStringUntil('\n').toInt();  
 Serial.println(value); 
 }
 //int x=timec%period;
 
 if((timec-previousMillis1)==10000)
 {
  Serial.println("Delay:");
  Serial.println(value); 
  previousMillis1=timec;
  
 }
 


  if (timec - previousMillis >= value) {
    
    previousMillis = timec;


    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }    
    digitalWrite(ledp, ledState);
  }
 
 
  


}
