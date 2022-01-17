#include <iostream>
#include <math.h>

using namespace std;

class Circle {

    public:
        double radius;

    Circle() {
        radius = 1;
    }

    Circle(int newRadius) {

        radius = newRadius;

    }

    double getArea(){

        double area;
        area = 3.1415 * pow(radius, 2);

        return area;

    }

};

int main() {

    Circle cir1;
    Circle cir2;
    Circle cir3(15);

    cir1.radius = 10;

    cout << cir1.radius << endl;
    cout << cir2.radius << endl;
    cout << cir3.radius << endl;

    cout << cir1.getArea() << endl;

    cir1 = cir2;

    cout << cir1.radius << endl;
    cout << cir2.radius << endl;

};


