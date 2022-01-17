#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <iostream>
#include <string>

using namespace std;

class GeometricObject {

protected:
    string color;
    bool filled;

public:
    GeometricObject() {
        color = "white";
        filled = false;
    }
    GeometricObject(const string& color, bool filled) {
        this->color = color;
        this->filled = filled;
    }

    string getColor() const {
        return color;
    }
    bool isFilled() const {
        return filled;
    }
};

#endif
