#ifndef STOCK_H
#define STOCK_H

#include <string>

using namespace std;

class Rectangle2D {

//Defining the variables as private
private:
    double x, y, height, width;

//Defining the public functions
public:
    Rectangle2D();
    Rectangle2D(double x, double y, double height, double width);

    void setX(double x);
    void setY(double y);
    void setHeight(double height);
    void setWidth(double width);

    double getX() const;
    double getY() const;
    double getHeight() const;
    double getWidth() const;

    bool contains(double x, double y) const;
    bool contains2(const Rectangle2D &r) const;
    bool overlaps(const Rectangle2D &r) const;

};

#endif
