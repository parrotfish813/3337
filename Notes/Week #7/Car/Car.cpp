#include "Car.h"
#include <iostream>

using namespace std;

Car::Car() {

    year = 2021;
    color = "White";
    MPG = 5;
    brand = "Toyota";
    model = "Corolia";

}

Car::Car(string newColor, string newBrand, string newModel, int newYear, double newMPG) {

    color = newColor;
    brand = newBrand;
    model = newModel;
    year = newYear;
    MPG = newMPG;

}

string Car::getColor() {

    return color;

}

string Car::getBrand() {

    return brand;

}

string Car::getModel() {

    return model;

}

int Car::getYear() {

    return year;

}

double Car::getMPG() {

    return MPG;

}

void Car::setColor(string newColor) {

    color = newColor;

}

void Car::setBrand(string newBrand) {

    brand = newBrand;

}

void Car::setModel(string newModel) {

    model = newModel;

}

void Car::setYear(int newYear) {

    if(newYear < 1970) {
        cout << "Car is to old" << endl;
    }
    else {
        year = newYear;
    }

}

void Car::setMPG(double newMPG) {

    if(newMPG > 0) {
        MPG = newMPG;
    }
    else {
        cout << "MPG can not be negative" << endl;
    }

}

void Car::display() {

    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Year: " << year << endl;
    cout << "MPG: " << MPG << endl;

}

bool Car::compareEfficiency(Car &car2) {

    if(MPG > car2.getMPG()) {
        return true;
    }
    else {
        return false;
    }

}