#include <iostream>

using namespace std;

int main() {

    double distance;
    double efficiency;
    double price;

    cout << "Distance driven: " << endl;
    cin >> distance;
    cout << "Miles per gallon: " << endl;
    cin >> efficiency;
    cout << "Price per gallon: " << endl;
    cin >> price;

    double cost = (distance / efficiency) * price;

    cout << "The cost of driving is: " << cost << endl;

    return 0;

}