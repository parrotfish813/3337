#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

using namespace std;

class Package {
protected:
    string name, address, city, state;
    int zip;
    double weight, cost;
    static int ID;
    int IDp;

public:
    Package();
    Package(const string &newName, const string &newAddress, const string &newCity, const string &newState, int newZip, double newWeight, double newCost);

    void setWeight(double newWeight);
    void setCostPerOunce(double newCost);

    double calculateCost() const;

    void printPackageInfo();

};

#endif
