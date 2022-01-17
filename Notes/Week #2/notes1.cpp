#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    double number = 231.53124123;

    //The default decimal place is 3 for CLion
    cout << number << endl;

    //Set's the precision to a set amount of numbers
    cout << setprecision(3) << number << endl;
    cout << setprecision(8) << number << endl;

    //Fixed makes it to where it will print 7 decimal places instead of 7 total numbers
    cout << fixed << setprecision(7) << number << endl;

    string city;

    cout << "Enter a city:" << endl;

    //cin >> city;

    //It won't read anything after the new line
    getline(cin, city, '\n');

    cout << city << endl;

    cout << "Enter a city:" << endl;

    //cin >> city;

    //It won't read anything past the comma
    getline(cin, city, ',');

    cout << city << endl;

    return 0;

}