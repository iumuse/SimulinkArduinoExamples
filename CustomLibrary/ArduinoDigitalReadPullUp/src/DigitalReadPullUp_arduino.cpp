#include <Arduino.h>
#include "DigitalReadPullUp_arduino.h" 

extern "C" void DigitalReadPullUpSetup(uint8_T pin)
{ 
   pinMode(pin, INPUT_PULLUP); 
} 

// Read a logic value from pin 
extern "C" boolean_T readDigitalPullUp(uint8_T pin) 
{ 
   return digitalRead(pin); 
}