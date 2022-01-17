#include "MyInteger.h"
#include <iostream>

using namespace std;

double MyInteger::averageOfIntegers = 0;
int MyInteger::sumOfIntegers = 0;
int MyInteger::numberOfObjects = 0;

MyInteger::MyInteger() {

    setValue(1);
    // Incrementing the number of objects
    numberOfObjects++;
}

MyInteger::MyInteger(int newValue) {

    setValue(newValue);
    numberOfObjects++;
}

void MyInteger::setValue(int newValue) {
    value = newValue;
    // Everytime that a value is set add it to the sum
    sumOfIntegers += value;
}

const int MyInteger::getValue() {
    return value;
}

bool MyInteger::isEven() const {

    if(value % 2 == 0) {
        return true;
    }
    else {
        return false;
    }

}

bool MyInteger::isOdd(int value) {

    if(value % 2 != 0) {
        return true;
    }
    else {
        return false;
    }

}

bool MyInteger::equals(int number) const {

    if(value == number) {
        return true;
    }
    else {
        return false;
    }

}

bool MyInteger::equals2(const MyInteger &myInt) const {

    MyInteger temp = myInt;

    //Checking the value of the declared object to the object passed through the function 
    if(value == temp.getValue()) {
        return true;
    }
    else {
        return false;
    }

}

double MyInteger::getAverageOfIntegers() {

    // If the sum equals 0 return 0
    if (numberOfObjects == 0) {
        averageOfIntegers = 0;
    }

    // Otherwise calculate the sum
    else {
        averageOfIntegers = (static_cast<double> (sumOfIntegers)) / numberOfObjects;
    }

    //Return the sum to be printed
    return averageOfIntegers;

}

