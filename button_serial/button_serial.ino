#include <SoftwareSerial.h>

/*
  Button
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 1;     // the number of the pushbutton pin

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {
  pinMode(buttonPin, INPUT);    
 
  mySerial.begin(9600);
  mySerial.println("Hello, world?");
}

// While pressing the button, LED will go off, else it is on.
void loop(){
  // read the state of the pushbutton value:
  int buttonState = digitalRead(buttonPin);
  
  mySerial.print("buttonState: ");
  mySerial.println(buttonState);
  delay(50);
}
