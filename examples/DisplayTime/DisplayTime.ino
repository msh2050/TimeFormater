

#include <TimeFormater.h>

//initialize the printer class
TimeFormater TF(Serial);

void setup()
{

	Serial.begin(57600);
	delay(200);
}

void loop()
{
	TF.Seconds += 1;
	TF.PrintHHMMSS();
	Serial.println(" ");
	delay(1000);

}
