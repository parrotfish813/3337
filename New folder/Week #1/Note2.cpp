#include <iostream>

using namespace std;

namespace first {

    int x = 10;

}

int x = 3;

int main() {

    int x = 5;

    char s[] = "Sup Fuckers";

    for (int i = 0; i < 11; i++) {
        cout << s[i];
    }

    cout << "\nThe size of int " << sizeof(int) << " bytes" << endl;
    cout << "\nThe size of double " << sizeof(double) << " bytes" << endl;
    cout << "\nThe size of float " << sizeof(float) << " bytes" << endl;
    cout << "\nThe size of char " << sizeof(char) << " bytes" << endl;

    //Access your regular varible
    cout << x << endl;
    //Access global variable by using :: without anything in front
    cout << ::x << endl;
    //Access your created name space
    cout << first::x << endl;

    int input;

    cout << "Please enter a number" << endl;

    cin >> input;

    if (input > 100) {
        cout << "Damn that's a big number" << endl;
    }
    else {
        cout << "Why you got a small number" << endl;
    }

    float radius;
    const double PI = 3.1416;

    cout << "Please enter the radius of a circle" << endl;
    cin >> radius;

    double area = radius * radius * PI;

    cout << "The area of the circle is " << area << endl;

    double seconds;

    cout << "Please enter the number of seconds you wish to convert" << endl;
    cin >> seconds;

    double minutes = seconds / 60;

    double hours = minutes / 60;

    cout << "There are " << minutes << " minutes or " << hours << " hours in " << seconds << " seconds" << endl;

    return 0;

}