#include "Rational.h"

Rational::Rational() {
    numerator = 0;
    denominator = 1;
}

Rational::Rational(int newNumerator, int newDenominator) {
    numerator = newNumerator;
    setDenominator(newDenominator);
}

int Rational::getNumerator() const {
    return numerator;
}
int Rational::getDenominator() const {
    return denominator;
}

void Rational::setNumerator(int newNumerator) {
    numerator = newNumerator;
}
void Rational::setDenominator(int newDenominator) {
    if(denominator != 0) {
        denominator = newDenominator;
    }
    else {
        denominator = 1;
    }
}

Rational Rational::addition(const Rational &second) const {
    if(denominator == second.getDenominator()) {
        int n = numerator * second.getDenominator() + second.getNumerator() * denominator;
        int d = denominator;
        return Rational(n, d);
    }
    else {
        int n = numerator * second.getDenominator() + second.getNumerator() * denominator;
        int d = denominator * second.getDenominator();
        return Rational(n, d);
    }
}

Rational Rational::subtraction(const Rational &second) const {
    if(denominator == second.getDenominator()) {
        int n = numerator * second.getDenominator() - second.getNumerator() * denominator;
        int d = denominator;
        return Rational(n, d);
    }
    else {
        int n = numerator * second.getDenominator() - second.getNumerator() * denominator;
        int d = denominator * second.getDenominator();
        return Rational(n, d);
    }
}

Rational Rational::multiply(const Rational &second) const {
    int n = numerator * second.getNumerator();
    int d = denominator * second.getDenominator();

    return Rational(n, d);
}

Rational Rational::division(const Rational &second) const {
    int n = numerator * second.getDenominator();
    int d = denominator * second.getNumerator();

    return Rational(n, d);
}

double Rational::doubleVal() const {
    return (double) numerator / denominator;
}

bool Rational::lessThan(const Rational &second) const{
    if(doubleVal() < second.doubleVal()) {
        return true;
    }
    else {
        return false;
    }
}

bool Rational::equal(const Rational &second) const {
    if(doubleVal() == second.doubleVal()) {
        return true;
    }
    else {
        return false;
    }
}

Rational Rational::operator + (const Rational &second) const {
    return addition(second);
}
bool Rational::operator < (const Rational &second) const {
    return lessThan(second);
}
