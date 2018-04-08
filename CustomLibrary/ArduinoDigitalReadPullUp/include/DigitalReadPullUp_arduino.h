#ifndef _DIGITALREADPULLUP_ARDUINO_H_
#define _DIGITALREADPULLUP_ARDUINO_H_
#include "rtwtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

void DigitalReadPullUpSetup(uint8_T pin);
boolean_T readDigitalPullUp(uint8_T pin);
#ifdef __cplusplus
}
#endif
#endif //_DIGITALREADPULLUP_ARDUINO_H_