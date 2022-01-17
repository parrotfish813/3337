#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

int main() {

    //Creating the 3 objects with the corresponding seconds
    Time t1;
    Time t2(555550);
    Time t3(55550);

    //Printing out all the objects in both Universal and Standard time
    t1.printUniversal();
    t1.printStandard();
    cout << "-----------------------------" << endl;
    t2.printUniversal();
    t2.printStandard();
    cout << "-----------------------------" << endl;
    t3.printUniversal();
    t3.printStandard();
    cout << "-----------------------------" << endl;

    return 0;

};



