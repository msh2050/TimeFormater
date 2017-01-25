

#include "TimeCounter.h"

timecounter::timecounter()
{
	Seconds = 0;

}

#ifdef UseExtraFunctions
char * timecounter::getsHHMMSS()
{
	
	uint8_t j;
	char buffer[10];
	j = 0;
	j = sprintf(buffer, "%02d:", numberOfHours(counter));
	j += sprintf(buffer + j, "%02d:", numberOfMinutes(counter));
	j += sprintf(buffer + j, "%02d", numberOfSeconds(counter));
	return buffer;
}

uint8_t timecounter::timeminutes()
{
	uint8_t temp;
	temp = numberOfMinutes(counter);
	return temp;
}

uint8_t timecounter::timesecond()
{

	uint8_t temp;
	temp = numberOfSeconds(counter);
	return temp;
}
#endif

char * timecounter::getHHMMSS()
{
	char buffer[10];
	MakeTime(buffer, numberOfHours(Seconds), numberOfMinutes(Seconds), numberOfSeconds(Seconds));
	return buffer;

}

void timecounter::MakeTime(char *buff, int hour, int min, int sec)
{
	char temp[3];

	buff[0] = '\0';
	itoa(min, temp, 10);
	if (hour < 10) {
		strcpy(buff, "0");
	}
	strcat(buff, temp);
	strcat(buff, ":");

	if (min < 10) {
		strcat(buff, "0");
	}
	itoa(min, temp, 10);
	strcat(buff, temp);
	strcat(buff, ":");

	if (sec < 10) {
		strcat(buff, "0");
	}
	itoa(sec, temp, 10);
	strcat(buff, temp);
}

