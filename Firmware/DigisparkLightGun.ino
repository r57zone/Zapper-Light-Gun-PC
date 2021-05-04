#include <DigiJoystick.h>  

// Digispark Light Gun
// by r57zone

const int buttonPin = 0;
const int lightPin = 2;

byte buttons;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(lightPin, INPUT_PULLUP);
  
  DigiJoystick.setX((byte)127);
  DigiJoystick.setY((byte)127);
}

void loop() {
  buttons = 0x00;

  if (digitalRead(buttonPin))
    buttons |= 0x01;
  if (digitalRead(lightPin))
    buttons |= 0x02;
    
  DigiJoystick.setButtons((byte)buttons, 0x00);
  DigiJoystick.update();
}