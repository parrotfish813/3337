#include "Circle2D.h"

using namespace std;

//Defining the default number of objects to 0
int Circle2D::numberOfCircles = 0;

//Default constructor
Circle2D::Circle2D() {

    x = 0.0;
    y = 0.0;
    radius = 0.0;
    numberOfCircles++;
}

//User defined constructor
Circle2D::Circle2D(double x, double y, double radius) {

    this -> x = x;
    this -> y = y;
    this -> radius = radius;
    numberOfCircles++;

}

//Copying one object to a new object
Circle2D::Circle2D(const Circle2D & circle) {

    x = circle.getX();
    y = circle.getY();
    radius = circle.getRadius();
    numberOfCircles++;
}

//Deconstructor
Circle2D::~Circle2D() {
    numberOfCircles--;
}

//Get function for x
double Circle2D::getX() const {
    return x;
}

//Get function for y
double Circle2D::getY() const {
    return y;
}

//Get function for the radius
double Circle2D::getRadius() const {
    return radius;
}

//Get function for the number of circles
int Circle2D::getNumberOfCircles() {
    return numberOfCircles;
}

//Passing a circle object though the function and seeing if it overlaps with the object the function is declared with
bool Circle2D::overlaps(const Circle2D& circle) {

    //getting the distance from 1 point to another point
    double temp = sqrt(pow((x - circle.getX()), 2) + pow((y - circle.getY()), 2));

    //Getting the total radius of the 2 circles
    double temp2 = radius + circle.getRadius();

    //Comparing the distance between the circles to the total radius, if they overlap return true, else return false
    if(temp < temp2) {
        return true;
    }
    else {
        return false;
    }

}



