#include <SoftwareSerial.h>

/*
  Button
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 1;     // the number of the pushbutton pin
const int txPin = 2;
SoftwareSerial mySerial(4, txPin); // RX, TX

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(txPin, OUTPUT);
  mySerial.begin(9600);
}

void loop(){
  // read the state of the pushbutton value:
  int buttonState = digitalRead(buttonPin);
  
  mySerial.print("buttonState: ");
  mySerial.println(buttonState);
  delay(50);
}
