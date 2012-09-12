#include <SoftwareSerial.h>

/*
 Fade
 
 This example shows how to fade an LED on pin 3
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

const int led = 4;           // the pin that the LED is attached to
const int txPin = 3;
SoftwareSerial mySerial(2, txPin); // RX, TX

int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  pinMode(led, OUTPUT);
  pinMode(txPin, OUTPUT);
  mySerial.begin(9600);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  analogWrite(led, brightness);
  
  mySerial.print("brightness: ");
  mySerial.println(brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

