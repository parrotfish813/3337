#include "OvernightPackage.h"

OvernightPackage::OvernightPackage() {
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
OvernightPackage::OvernightPackage(const string &newName, const string &newAddress, const string &newCity, const string &newState, int newZip, double newWeight, double newCost, double newFee) {
    name = newName;
    address = newAddress;
    city = newCity;
    state = newState;
    zip = newZip;
    setWeight(newWeight);
    setCostPerOunce(newCost);
    setOvernightFeePerOunce(newFee);
    IDp = ++Package::ID;
}

//Setting the fee using exception handling
void OvernightPackage::setOvernightFeePerOunce(double newFee) {
    if(newFee <= 0) {
        throw 4.0;
    }
    fee = newFee;
}

//Calculating the new cost
double OvernightPackage::calculateCost() const {
    return (cost + fee) * weight;
}

//Printing the output
void OvernightPackage::printPackageInfo() {
    cout << "-------------------------------------------------" << endl;
    cout << "Overnight Package ID " << IDp << ":" << endl;
    cout << endl;
    cout << name << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << zip << endl;
    cout << endl;
    cout << "Cost: $" << calculateCost() << endl;
    cout << "-------------------------------------------------" << endl;
}
