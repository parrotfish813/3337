#include "Triangle.h"

//Default Constructor
Triangle::Triangle() {
    side1 = 1.0;
    side2 = 1.0;
    side3 = 1.0;
}

//User defined constructor
Triangle::Triangle(double newSide1, double newSide2, double newSide3, const string &newColor, bool newFilled) {
    setSide1(newSide1);
    setSide2(newSide2);
    setSide3(newSide3);
    color = newColor;
    filled = newFilled;
}

//Set methods for each side
double Triangle::setSide1(double newSide1) {
    side1 = newSide1;
}
double Triangle::setSide2(double newSide2) {
    side2 = newSide2;
}
double Triangle::setSide3(double newSide3) {
    side3 = newSide3;
}

//Get methods for each side
double Triangle::getSide1() const {
    return side1;
}
double Triangle::getSide2() const {
    return side2;
}
double Triangle::getSide3() const {
    return side2;
}

//Calculating and returning the area of the triangle
double Triangle::getArea() const {
    double s = (getPerimeter() / 2);
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

//Calculating and returning the perimeter of the triangle
double Triangle::getPerimeter() const {
    return side1 + side2 + side3;
}

//Displaying the output
void Triangle::display() {
    cout << "Area:         " << getArea() << endl;
    cout << "Perimeter:    " << getPerimeter() << endl;
    cout << "Color:        " << getColor() << endl;
    cout << "Filled:       " << isFilled() << endl;
    cout << "----------------------" << endl;
}

//Defining the operator < to compare objects
bool Triangle::operator < (const Triangle &second) const {
    if(filled == true && second.isFilled() == false) {
        return false;
    }
    else {
        if(getPerimeter() > second.getPerimeter()) {
            return false;
        }
        else {
            return true;
        }
    }
}

//Defining the operator >= to compare objects
bool Triangle::operator >= (const Triangle &second) const {
    if(filled == second.isFilled() || (filled == false && second.getPerimeter() == true)) {
        return true;
    }
    else {
        if(getPerimeter() >= second.getPerimeter()) {
            return true;
        }
        else {
            return false;
        }
    }
}

//Defining the operator != to compare objects
bool Triangle::operator != (const Triangle &second) const {
    if(filled != second.isFilled()) {
        return true;
    }
    else {
        if(getPerimeter() != second.getPerimeter()) {
            return true;
        }
        else {
            return false;
        }
    }
}
