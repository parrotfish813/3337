#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "GeometricObject.h"
#include <math.h>

using namespace std;

class Triangle : public GeometricObject {
//Defining private variables
private:
    double side1;
    double side2;
    double side3;

//Defining public functions
public:
    Triangle();
    Triangle(double newSide1, double newSide2, double newSide3, const string &newColor, bool newFilled);

    double setSide1(double newSide1);
    double setSide2(double newSide2);
    double setSide3(double newSide3);

    double getSide1() const;
    double getSide2() const;
    double getSide3() const;

    double getPerimeter() const;
    double getArea() const;

    void display();

    bool operator < (const Triangle &second) const;
    bool operator >= (const Triangle &second) const;
    bool operator != (const Triangle &second) const;

};

#endif
