/*
 * analog_clock.h
 *
 *  Created on: Oct 9, 2023
 *      Author: Huy
 */
#include "global.h"

#ifndef INC_ANALOG_CLOCK_H_
#define INC_ANALOG_CLOCK_H_

void TurnLed(int num);

void TurnLedInSequence();

void clearAllClock();

void setNumberOnClock(int num);

void DisplayTime(int hour, int minute, int second);

//void AnalogClock(int start_hour, int start_minute, int start_second);
#endif /* INC_ANALOG_CLOCK_H_ */
