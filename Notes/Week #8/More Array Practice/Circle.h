#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {

private:
    double radius;
    static int numberOfObjects;

public:
    Circle();
    Circle(double radius);

    double getRadius() const;
    static int getNumberOfObjects();

    void setRadius(double newRadius);

    double area() const;

};

#endif
