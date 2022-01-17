#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //Assigning the variables based off the given numbers
    double g = 5553;
    double t = 2.16;
    double a;

    //Converting the grams to kilograms
    int kg = g / 1000;

    //Calculating the average sales in grams per hour
    a = kg / t;

    //Printing out the result
    cout << "The average sale in kg/hr is " << a << endl;

    return 0;

}