#include "Circle.h"

int Circle::numberOfObjects = 0;

Circle::Circle() {

    radius = 1;
    numberOfObjects++;

}

Circle::Circle(double newRadius) {

    if(newRadius > 0) {
        radius = newRadius;
    }
    else {
        radius = 1;
    }

    numberOfObjects++;

}

void Circle::setRadius(double newRadius){

    if(newRadius > 0) {
        radius = newRadius;
    }

}

double Circle::getRadius() const{

    return radius;

}

double Circle::area() const {

    return radius * radius * 3.1415;

}

//int static getNumberOfObjects() {

//    return numberOfObjects;

//}

