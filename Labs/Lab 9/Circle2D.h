#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <math.h>

using namespace std;

class Circle2D {

//Defining all of the variables as private
private:
    double x, y, radius;
    static int numberOfCircles;

//Defining all of the functions and constructors as public
public:
    Circle2D();
    Circle2D(double x, double y, double radius);
    Circle2D(const Circle2D & circle);
    ~Circle2D();

    double getX() const;
    double getY() const;
    double getRadius() const;
    static int getNumberOfCircles();

    bool overlaps(const Circle2D& circle);

};

#endif
