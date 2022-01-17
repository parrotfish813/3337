#include "Package.h"

int Package::ID = 0;

Package::Package() {
    name = "Tim Allen";
    address = "4700 Research Way";
    city = "Lakeland";
    state = "FL";
    zip = 33805;
    weight = 5.0;
    cost = 3.25;
    IDp = ID;
}

Package::Package(const string &newName, const string &newAddress, const string &newCity, const string &newState, int newZip, double newWeight, double newCost) {
    name = newName;
    address = newAddress;
    city = newCity;
    state = newState;
    zip = newZip;
    setWeight(newWeight);
    setCostPerOunce(newCost);
    IDp = ++Package::ID;
}

//Setting weight using exception handling
void Package::setWeight(double newWeight) {
    if(newWeight <= 0) {
        throw 1.0;
    }
    weight = newWeight;
}

//Setting cost per ounce using exception handling
void Package::setCostPerOunce(double newCost) {
    if(newCost <= 0) {
        throw 2.0;
    }
    weight = newCost;
}

//Calculating the new cost
double Package::calculateCost() const {
    return weight * cost;
}

//Printing the output
void Package::printPackageInfo() {
    cout << "-------------------------------------------------" << endl;
    cout << "Package id " << IDp << ":" << endl;
    cout << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << zip << endl;
    cout << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------" << endl;
}