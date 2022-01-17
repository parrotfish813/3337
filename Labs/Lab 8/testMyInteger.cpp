#include <iostream>
#include "MyInteger.h"

using namespace std;

int main() {

    cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;

    MyInteger i1(9323);

    MyInteger i2(147);

    MyInteger i3(9323);

    cout << "isOdd(" << i1.getValue() << ") = " << i1.isEven() << endl;

    cout << "i1.isEven() = " << MyInteger::isOdd(20) << endl;

    cout << "i3.equals(843) = " << i3.equals(843) << endl;

    cout << "i1.equals(i3) = " << i1.equals2(i3) << endl;

    cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;

    return 0;

};
