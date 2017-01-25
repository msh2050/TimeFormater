#include <TimeCounter.h>

timecounter tc;

void setup()
{

	Serial.begin(57600);
	delay(200);
}

void loop()
{

  /* add main program code here */
	tc.Seconds += 1;
	Serial.print(tc.Seconds, DEC);
	Serial.print("  /  ");
	Serial.println(tc.getHHMMSS());
	delay(1000);
}
