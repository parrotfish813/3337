#include <iostream>
#include <iomanip>
#include "Circle.h"

using namespace std;

double sum(Circle circleArray[], int size);
void printCircleArray(Circle circleArray[], int size);

int main() {

    Circle circleArray[10];

    for(int i = 0; i < 10; i++) {
        circleArray[i].setRadius(i + 1);
    }

    printCircleArray(circleArray, 10);

    cout << endl;

    Circle circleArray2[5] = {Circle(),
                              Circle(),
                              Circle(3.2),
                              Circle(6.1),
                              Circle(7.9)};

    printCircleArray(circleArray2, 5);

    return 0;

};

double sum(Circle circleArray[], int size) {

    double sum = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + circleArray[i].area();
    }

    return sum;

}

void printCircleArray(Circle circleArray[], int size) {

    cout << setw(35) << left << "Radius" << setw(8) << "Area" << endl;

    for(int i = 0; i < size; i++) {

        cout << setw(35) << left << circleArray[i].getRadius() << setw(8) << circleArray[i].area() << endl;

    }

    cout << "--------------------------------------------" << endl;

    cout << setw(35) << left << "The sum of the areas is" << setw(8) << sum(circleArray, 10) << endl;

}

