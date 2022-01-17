#include <iostream>
#include <string>

using namespace std;

#define SIZE 20

class Circle {

private:
    double radius;
    static int numberOfObjects;

public:

    Circle() {
        radius = 1;
        numberOfObjects++;
    }

    Circle(double newRadius) {
        setRadius(newRadius);
        numberOfObjects++;
    }

    ~Circle() {
        numberOfObjects--;
    }

    void setRadius(double radius) {
        if(radius > 0) {
            this -> radius = radius;
        }
    }
    double getRadius() const {
        return radius;
    };

    static int getNumberOfObjects() {
        return numberOfObjects;
    }

};

int Circle::numberOfObjects = 0;

int main() {

    Circle cir1;

    Circle *p1 = new Circle;

    cout << Circle::getNumberOfObjects() << endl;

    cout << p1->getRadius() << endl;

    return 0;

};



