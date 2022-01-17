#include <iostream>
#include "Car.h"

using namespace std;

bool compareEfficiency(Car &car1, Car &car2) {

    if(car1.getMPG() > car2.getMPG()) {
        return true;
    }
    else {
        return false;
    }

}

int main() {

    Car car1;

    Car car2("Red", "BMW", "3", 2020, 8.4);

    car1.display();
    cout << endl;

    car2.display();
    cout << endl;

    bool result = car2.compareEfficiency(car1);

    cout << result << endl;

    result = compareEfficiency(car2, car1);

    cout << result << endl;

    Car cars[3];

    cout << cars[2].getBrand() << endl;

    Car carsUser[2] = {Car("Blue", "Mercadies", "C", 2018, 9.4),
                       Car("Red", "Mercadies", "A", 2020, 10)};

    for(int i = 0; i < 2; i++)
    {
        carsUser[i].display();
        cout << endl;
    }
};


