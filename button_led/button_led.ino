/*
  Button
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 1;     // the number of the pushbutton pin
const int ledPin =  3;      // the number of the LED pin
// Even if the led is actually in pin 2, the number 3 above seems to be only working...

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int ledState = 0; // Pressing toggles this value

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

// While pressing the button, LED will go off, else it is on.
void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {     
    digitalWrite(ledPin, HIGH);  
  } 
  else {
    digitalWrite(ledPin, LOW); 
  }
}
