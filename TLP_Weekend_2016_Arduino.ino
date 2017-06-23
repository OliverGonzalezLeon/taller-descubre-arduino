int button_pin = 8;
const int ledPin =  5; 
int ledState = LOW; 
unsigned long previousMillis = 0;
const long interval = 1000;   

void setup() {
  pinMode (button_pin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

int dice = 0;
int bit0, bit1, bit2;

void loop() {

bool button_stat = digitalRead (button_pin);

if (button_stat == LOW) // Button is reverse polarity (INPUT_PULLUP)
{
    dice = random (7); // Generates a random number from 0 to 7
}

// We make bitwise AND with dice and 1, 2 and 4
// dice = 0 = 000
// dice = 1 = 001
// dice = 2 = 010
// dice = 3 = 011
// dice = 4 = 100
// dice = 5 = 101
// dice = 6 = 110
// dice = 7 = 111

bit0 = dice & 1;
bit1 = dice & 2;
bit2 = dice & 4;

Serial.print("number: ");
Serial.println(dice);
Serial.print("Bit0: ");
Serial.println(bit0);
Serial.print("Bit1: ");
Serial.println(bit1);
Serial.print("Bit2: ");
Serial.println(bit2);

if (bit0 >> 0)
  {digitalWrite (11, HIGH);
  }
else   digitalWrite (11, LOW);

if (bit1 >> 0) 
  {digitalWrite (12, HIGH);
  }
else   digitalWrite (12, LOW);

if (bit2 >> 0) 
  {digitalWrite (13, HIGH);
  }
else   digitalWrite (13, LOW);

delay (100);

// Hacer blink

unsigned long currentMillis = millis();
 
  if(currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }

}
