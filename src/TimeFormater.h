
/* 
* TimeFormater.h
*
* Created: 2017-01-30 8:11:40 PM
* Author: Mustafs Salman
*/


#ifndef __PRINTFORMATTER_H__
#define __PRINTFORMATTER_H__

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

// macros from DateTime.h
/* Useful Constants */
#define SECS_PER_MIN  (60UL)
#define SECS_PER_HOUR (3600UL)
#define SECS_PER_DAY  (SECS_PER_HOUR * 24L)

/* Useful Macros for getting elapsed time */
#define numberOfSeconds(_time_) (_time_ % SECS_PER_MIN)
#define numberOfMinutes(_time_) ((_time_ / SECS_PER_MIN) % SECS_PER_MIN)
//#define numberOfHours(_time_) (( _time_% SECS_PER_DAY) / SECS_PER_HOUR) // used if reset every 24h
#define numberOfHours(_time_) ( _time_ / SECS_PER_HOUR)

class TimeFormater
{
//functions
public:
	TimeFormater( Print &print );
	void PrintHHMMSS();
	unsigned long Seconds;

private:
	
	void PrintDigit(byte Digit);
	Print* printer;

}; //PrintFormatter

#endif //__PRINTFORMATTER_H__
