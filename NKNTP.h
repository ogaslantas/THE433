// You can edit NKNTP.h in order to change to your Timezone and DST
// check https://github.com/JChristensen/Timezone/blob/master/ReadMe.md for examples.

#include <Timezone.h>    //https://github.com/JChristensen/Timezone

//Eastern European Time Zone
// http://www.epochconverter.com/timezones
extern TimeChangeRule myDST = {"EEST", Last, Sun, Mar, 3, 180};    //Daylight time = UTC + 3 hours
extern TimeChangeRule mySTD = {"EET", Last, Sun, Oct, 4, 120};     //Standard time = UTC + 2 hours
extern Timezone myTZ(myDST, mySTD);

extern boolean NTPsuccess;

void NTP2localTime();
void getTheNTPTime();
