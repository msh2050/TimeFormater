/* 
* TimeFormater.cpp
*
* Created: 2017-01-30 8:11:40 PM
* Author: Mustafs Salman
*/


#include "TimeFormater.h"


// default constructor
TimeFormater::TimeFormater(Print &print)
{
	printer = &print; //operate on the address of print
	Seconds = 0;
} //TimeFormater

void TimeFormater::PrintHHMMSS()
{
	printer->print(numberOfHours(Seconds), DEC);	
	PrintDigit(numberOfMinutes(Seconds));
	PrintDigit(numberOfSeconds(Seconds));

}

void TimeFormater::PrintDigit(byte Digit)
{
	printer->write(':');
	if (Digit < 10) printer->write('0');
	printer->print(Digit , DEC);
}


