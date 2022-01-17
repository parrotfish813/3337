#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage() {
    name = "Tim Allen";
    address = "4700 Research Way";
    city = "Lakeland";
    state = "FL";
    zip = 33805;
    weight = 5.0;
    cost = 3.25;
    fee = 2.0;
    IDp = ++Package::ID;
}
TwoDayPackage::TwoDayPackage(const string &newName, const string &newAddress, const string &newCity, const string &newState, int newZip, double newWeight, double newCost, double newFee) {
    name = newName;
    address = newAddress;
    city = newCity;
    state = newState;
    zip = newZip;
    setWeight(newWeight);
    setCostPerOunce(newCost);
    setFlatFee(newFee);
    IDp = ++Package::ID;
}

//Setting the fee using exception handling
void TwoDayPackage::setFlatFee(double newFee) {
    if(newFee <= 0) {
        throw 3.0;
    }
    fee = newFee;
}

//Calculating the new cost
double TwoDayPackage::calculateCost() const {
    return (weight * cost) + fee;
}

//Printing the output
void TwoDayPackage::printPackageInfo() {
    cout << "-------------------------------------------------" << endl;
    cout << "Two Day Package ID " << IDp << ":" << endl;
    cout << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << zip << endl;
    cout << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------" << endl;
}