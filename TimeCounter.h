// TimeCounter.h

#ifndef _TIMECOUNTER_h
#define _TIMECOUNTER_h

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

//#define UseExtraFunctions

class timecounter
{
public:
	timecounter();
#ifdef UseExtraFunctions
	char * getsHHMMSS();
	uint8_t timeminutes();
	uint8_t timesecond();
#endif
	char * getHHMMSS();
	unsigned long Seconds;

private:
	void MakeTime(char *buff, int hour, int min, int sec);
	
};



#endif

