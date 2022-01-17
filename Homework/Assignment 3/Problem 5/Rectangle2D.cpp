#include "Rectangle2D.h"
#include <iostream>

using namespace std;

//Default constructor
Rectangle2D::Rectangle2D() {

    x = 0.0;
    y = 0.0;
    width = 1.0;
    height = 1.0;

}

//User defined values constructor
Rectangle2D::Rectangle2D(double newX, double newY, double newHeight, double newWidth) {

    x = newX;
    y = newY;
    height = newHeight;
    width = newWidth;

}

//Get X function
double Rectangle2D::getX() const {
    return x;
}

//Get Y function
double Rectangle2D::getY() const {
    return y;
}

//Get height function
double Rectangle2D::getHeight() const {
    return height;
}

//Get width function
double Rectangle2D::getWidth() const {
    return width;
}

//Set X function
void Rectangle2D::setX(double newX) {
    x = newX;
}

//Set Y function
void Rectangle2D::setY(double newY) {
    y = newY;
}

//Set height function
void Rectangle2D::setHeight(double newHeight) {
    height = newHeight;
}

//Set width function
void Rectangle2D::setWidth(double newWidth) {
    width = newWidth;
}

bool Rectangle2D::contains(double newX, double newY) const {

    //Of (x,y) is within the coordinate boundaries of rectangle, returns true
    if ((newX > (x - width / 2)) && ((newX < x + width / 2)) && (newY > (y - height / 2)) && (newY < (y + height / 2))) {
        return true;
    }
    else {
        return false; //otherwise false
    }
}

bool Rectangle2D::contains2(const Rectangle2D &r) const {

    //One rectangle contains the other of all corner coordinates of one are "inside" the other
    if (((r.getX() - (r.getWidth()) / 2) > (x - width / 2)) && (((r.getX() + (r.getWidth()) / 2) < x + width / 2)) &&
        ((r.getY() - (r.getHeight()) / 2) >(y - height / 2)) && ((r.getY() + (r.getHeight()) / 2) < (y + height / 2))) {
        return true;
    }
    else {
        return false;
    }
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {

    //Rectangles overlap if the distance between their centers is smaller than half of the sum of their dimensions bot for widths and heights
    if ((width > (2 * abs(x - r.getX()) - r.getWidth())) && (height > (2 * abs(y - r.getY()) - r.getHeight()))) {
        return true;
    }
    else {
        return false;
    }
}