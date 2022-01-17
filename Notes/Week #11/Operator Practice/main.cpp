#include <iostream>
#include <string>
#include "Rational.h"

using namespace std;

Rational operator - (Rational &r1, Rational &r2) {
    return r1.subtraction(r2);
}

int main() {

    Rational r1(4,2);
    Rational r2(2,3);
    Rational r3 = r1.addition(r2);
    Rational r4 = r1 + r2;
    Rational r5 = r1 - r2;

    bool result = r1 < r2;
    bool result2 = r2 < r1;
    bool result3 = r1.equal(r2);

    cout << r5.doubleVal() << endl;


    return 0;

};