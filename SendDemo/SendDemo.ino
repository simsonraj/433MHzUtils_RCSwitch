/*
  Example for different sending methods
  
  https://github.com/sui77/rc-switch/
  
*/

#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  Serial.begin(9600);
  
  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(digitalPinToInterrupt(D2));
  
  // Optional set protocol (default is 1, will work for most outlets)
  // mySwitch.setProtocol(2);

  // Optional set pulse length.
  // mySwitch.setPulseLength(320);
  
  // Optional set number of transmission repetitions.
  // mySwitch.setRepeatTransmit(15);
  
}

void loop() {
 /* Using decimal code */
  mySwitch.send(1234, 24);
  Serial.print("Attempting to send 1234");
  delay(4000);
  mySwitch.send(4321, 24);
  Serial.print("Attempting to send 4321");
  delay(2000);
 
}
 