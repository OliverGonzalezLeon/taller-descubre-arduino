int ledState = LOW;
int led = 2;
unsigned long previousMillis = 0;        

int interval = 1000;          

void setup() {     
  pinMode(led, OUTPUT); 
}


void loop()
{
 
  interval = analogRead (3)+20;
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   
   // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;
   
    digitalWrite(led, ledState);
   
  }
}
