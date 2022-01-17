#include <iostream>
#include "Circle.h"

using namespace std;

int main() {

    cout << "Number of objects created: " << endl;
    cout << Circle::getNumberOfObjects() << endl;

    Circle cir1;

    cout << "Number of objects created: " << endl;
    cout << Circle::getNumberOfObjects() << endl;

    Circle cir2(5.0);

    cout << "The radius of circle 2 is: " << cir2.getRadius() << endl;
    cout << "The area of circle 2 is: " << cir2.area() << endl;

    Circle cir3;
    Circle cir4(6.2);

    cout << "Number of objects created: " << endl;
    cout << Circle::getNumberOfObjects() << endl;

    return 0;

};

