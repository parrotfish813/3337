#include <iostream>

using namespace std;

class Circle {

private:
    double radius;

public:
    Circle() {
        radius = 1;
    }

    Circle(double newRadius) {
        if(newRadius < 0) {
            radius = 1;
        }
        else {
            radius = newRadius;
        }
    }

    double getArea() {
        return radius * radius * 3.1415;
    }

    double getRadius() {
        return radius;
    }

    void setRadius(int newRadius) {
        if(newRadius < 0){
            cout << "Radius can't be negative" << endl;
            return;
        }
        else {
            radius = newRadius;
        }
    }
};

int main() {

    Circle cir1;

    cir1.setRadius(3);

};


