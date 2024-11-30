#pragma once

class Time { 
public:
    int h; //number of hours
    int m; //number of minutes
};

int minutesSinceMidnight(Time);
int minutesUntil(Time, Time);

Time addMinutes(Time time0, int min);
