#include "Triangle.h"

using namespace std;

int main() {

    Triangle t1(4.0, 4.0, 4.0, "Red", false);
    Triangle t2(5.0, 5.0, 2.0, "Green", true);
    Triangle t3(5.5, 5.5, 5.5, "Blue", true);

    t1.display();
    t2.display();
    t3.display();

    cout << "(t1 < t2) = " << (t1 < t2) << endl;

    cout << "(t3 >= t2) = " << (t3 >= t2) << endl;

    cout << "(t3 != t1) = " << (t1 != t2) << endl;

    return 0;

};