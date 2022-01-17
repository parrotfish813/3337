#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <string>

using namespace std;

class Rational {

//Defining the private variables
private:
    int numerator;
    int denominator;

//Defining the public function
public:
    Rational();
    Rational(int newNumerator, int newDenominator);

    int getNumerator() const;
    int getDenominator() const;

    void setNumerator(int newNumerator);
    void setDenominator(int newDenominator);

    Rational addition(const Rational &second) const;
    Rational subtraction(const Rational &second) const;
    Rational multiply(const Rational &second) const;
    Rational division(const Rational &second) const;

    double doubleVal() const;

    bool lessThan(const Rational &second) const;
    bool equal(const Rational &second) const;

    Rational operator + (const Rational &second) const;
    bool operator < (const Rational &second) const;

};

#endif
