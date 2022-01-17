#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : private Package {
private:
    double fee;
public:
    TwoDayPackage();
    TwoDayPackage(const string &newName, const string &newAddress, const string &newCity, const string &newState, int newZip, double newWeight, double newCost, double newFee);

    void setFlatFee(double newFee);

    double calculateCost() const;

    void printPackageInfo();
};

#endif
