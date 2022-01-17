#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //Declaring all of the variables needed
    double side;
    double area;

    //Asking for the user's input
    cout << "Please enter the side of a hexagon:" << endl;

    //Accepting and recording the user's input
    cin >> side;

    //Calculating the area of the hexagon using the user inputted side
    area = (6 * pow(side, 2)) / (4 * tan(M_PI / 6));

    //Outputting the area to 4 numbers with the setprecision() command
    cout << setprecision(4) << area << endl;

    return 0;

}