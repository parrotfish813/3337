#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main() {

    //First try block
    try {
        Package test1("John Smith", "1020 Orange St", "Lakeland", "FL", 33111, 0, 0.4);
    }
    catch(double exe) {
        cout << "Exception: " << exe << endl;
    }

    //Second try block
    try {
        TwoDayPackage("Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 10.5, 0.65, -0.5);
    }
    catch(double exe) {
        cout << "Exception: " << exe << endl;
    }

    //Third try block
    try {
        OvernightPackage test3("Don Kelly", "9 Main St", "Denver", "CO", 66666, 12.25, 0.7, -1);
    }
    catch(double exe) {
        cout << "Exception: " << exe << endl;
    }

    //Testing actual constructors
    Package p1("John Smith", "1020 Orange St", "Lakeland","FL", 33111, 10.5, 0.4);

    TwoDayPackage p2("Bob George", "21 Pine Rd", "Cambridge","MA", 44444, 10.5, 0.65, 2.0);

    OvernightPackage p3("Don Kelly", "9 Main St","Denver", "CO", 66666, 12.25, 0.7, 0.25);

    p1.printPackageInfo();
    p2.printPackageInfo();
    p3.printPackageInfo();

    return 0;

};