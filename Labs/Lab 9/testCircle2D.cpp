#include <iostream>
#include "Circle2D.h"

using namespace std;

int main() {

    //Creating my first object on the heap with a pointer
    Circle2D *pCir1 = new Circle2D(2, 2, 2.5);

    //Creating my second object with user defined constructor
    Circle2D cir2(-6, -3, 1.5);

    //Printing out the current number of objects using corresponding get command
    cout << "Number of Objects is " << Circle2D::getNumberOfCircles() << endl;

    //Creating my third object by copying the info from my second object
    Circle2D cir3(cir2);

    //Printing out the current number of objects using corresponding get command
    cout << "Number of Objects is " << Circle2D::getNumberOfCircles() << endl;

    //Testing is my first circle and second circle overlap by using the overlaps function
    cout << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << endl;

    //Testing is my thirs circle and second circle overlap by using the overlaps function
    cout << "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl;

    //Freeing the memory allocated dynamically
    delete pCir1;

    //Printing out the current number of objects using corresponding get command
    cout << "Number of Objects is " << Circle2D::getNumberOfCircles() << endl;

    return 0;

};



