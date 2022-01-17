#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : private Package {

private:
    double fee;
public:
    OvernightPackage();
    OvernightPackage(const string &newName, const string &newAddress, const string &newCity, const string &newState, int newZip, double newWeight, double newCost, double newFee);

    void setOvernightFeePerOunce(double newFee);

    double calculateCost() const;

    void printPackageInfo();

};

#endif
