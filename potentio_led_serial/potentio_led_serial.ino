#include <SoftwareSerial.h>

/*
 Fade
 
 This example shows how to fade an LED on pin 3
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

const int led = 4;           // analog. the pin that the LED is attached to
const int txPin = 3;
const int meterPin = A1; // analog
SoftwareSerial mySerial(2, txPin); // RX, TX

// the setup routine runs once when you press reset:
void setup()  { 
  pinMode(led, OUTPUT);
  pinMode(txPin, OUTPUT);
  mySerial.begin(9600);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  int meter = analogRead(meterPin);
  analogWrite(led, meter / 4);
  
  mySerial.print("meter: ");
  mySerial.println(meter);

  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

