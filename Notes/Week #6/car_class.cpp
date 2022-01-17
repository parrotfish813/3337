#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Car {

    public:
        string color, model, make;
        int year;
        double MPG, weight;

    Car() {
        color = "White";
        make = "Ford";
        model = "Mustang";
        MPG = 30.5;
        weight = 4020;
        year = 2020;
    };

    Car(string newColor, string newMake, string newModel, double newMPG, double newWeight, int newYear) {
        color = newColor;
        make = newMake;
        model = newModel;
        MPG = newMPG;
        weight = newWeight;
        year = newYear;
    }

    double range(double gallons) {
        return MPG * gallons;
    }

   void display() {

        cout << "The current car: " << endl;
        cout << "Model: " << model << endl;
        cout << "Make: " << make << endl;
        cout << "Color: " << color << endl;
        cout << "MPG: " << MPG << endl;
        cout << "Weight: " << weight << endl;
        cout << "Year: " << year << endl;

    }
};

void display2(Car &car1) {

    cout << "The current car: " << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Make: " << car1.make << endl;
    cout << "Color: " << car1.color << endl;
    cout << "MPG: " << car1.MPG << endl;
    cout << "Weight: " << car1.weight << endl;
    cout << "Year: " << car1.year << endl;

}

int main() {

    Car car1;

    car1.display();

    Car car2("Red", "Tesla", "Model X", 35.5, 4000, 2021);

    car2.display();

    display2(car2);

    cout << endl;

    display2(car1);

    cout << endl;

    cout << "Total millage is: " << car1.range(5.6) << endl;

};


