#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <iomanip>

class Time {

//Creating the private variables
private:
    unsigned int hours, minutes, seconds;

//Creating the private variables and functions
public:
    unsigned int totalSeconds, totalMinutes, totalHours, hour;

    Time();
    Time(unsigned int timeElapsed);
    Time(unsigned int hours, unsigned int minutes, unsigned int seconds);

    unsigned int getHours();
    unsigned int setHours(unsigned int hours);

    unsigned int getMinutes();
    unsigned int setMinutes(unsigned int minute);

    unsigned int getSeconds();
    unsigned int setSeconds(unsigned int second);

    void printUniversal();
    void printStandard();

};

#endif
