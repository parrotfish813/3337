#include <iostream>
#include <iomanip>
#include "Rectangle2D.h"

using namespace std;

int main() {

    //Defining 3 objects
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.5, 5.4);

    //Using if statements to convert the returned 0 or 1 into the corresponding true or false to check if the object contains the designated coordinates
    if(r1.contains(3, 3) == true) {
        cout << "r1 contains the coordinates (3, 3)" << endl;
    }
    if(r1.contains(3, 3) == false) {
        cout << "r1 does not contain the coordinates (3, 3)" << endl;
    }

    //Using if statements to convert the returned 0 or 1 into the corresponding true or false to check if the object contains the designated rectangle
    if(r1.contains2(r2) == true) {
        cout << "r1 contains r2" << endl;
    }
    if(r1.contains2(r2) == false) {
        cout << "r1 does not contain r2" << endl;
    }

    //Using if statements to convert the returned 0 or 1 into the corresponding true or false to check if one objects overlap with the object passed through the function
    if(r1.overlaps(r3) == true) {
        cout << "r1 overlaps r2" << endl;
    }
    if(r1.overlaps(r3) == false) {
        cout << "r1 does not overlap r2" << endl;
    }

    return 0;

};



