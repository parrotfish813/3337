#include <iostream>
#include "Time.h"

#include  <ctime>

using namespace std;

//Defining the default values
Time::Time() {
    seconds = 0;
    minutes = 0;
    hours = 0;
}

//Calculating the current time by converting from seconds into the corresponding minutes and hours
Time::Time(unsigned int timeElapsed) {
    seconds = timeElapsed % 60;
    totalMinutes = timeElapsed / 60;
    minutes = totalMinutes % 60;
    totalHours = totalMinutes / 60;
    hours = totalHours % 24;
}

//Get and set functions for Hours
unsigned int Time::getHours() {
    return hours;
}
unsigned int Time::setHours(unsigned int newHours) {
    hours = newHours;
}

//Get and set functions for Minutes
unsigned int Time::getMinutes(){
    return minutes;
}
unsigned int Time::setMinutes(unsigned int newMinutes){
    minutes = newMinutes;
}

//Get and set functions for Seconds
unsigned int Time::getSeconds() {
    return seconds;
}
unsigned int Time::setSeconds(unsigned int newSeconds) {
    seconds = newSeconds;
}

//Printing out the time in Universal time
void Time::printUniversal() {
    cout << "Universal Time is " << setfill('0') << setw (2) << hours << ":" << setfill('0') << setw (2) << minutes << ":" << setfill('0') << setw (2) << seconds << endl;
}

void Time::printStandard() {

    //Assigning  hours to temporary value to hours
    unsigned int h = hours % 12;

    //Checking if the hours is greater than 12 and then printing in standard form with PM
    if(hours > 12) {
        hours = hours % 12;
        cout << "Standard Time is " << setfill('0') << setw (2) << ((h == 0) ? 12 : h) << ":" << setfill('0') << setw (2) << minutes << ":" << setfill('0') << setw (2) << seconds << " PM" << endl;
    }

    //Checking if the hours is less than 12 and then printing in standard form with AM
    else {
        hours = hours % 12;
        cout << "Standard Time is " << setfill('0') << setw (2) << ((h == 0) ? 12 : h) << ":" << setfill('0') << setw (2) << minutes << ":" << setfill('0') << setw (2) << seconds << " AM" << endl;
    }

}




