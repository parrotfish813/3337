#include <iostream>
#include <cmath>

using namespace std;

//Creates the prototype of the function
int getDigit(int n);

int main() {

    int n;

    //Prompts the user to enter their number and accepts the numbers
    cout << "Please enter an integer: " << endl;
    cin >> n;

    //Runs the function
    getDigit(n);

    return 0;

}

int getDigit(int n) {

    //Initializing the counter variable
    int c = 0;

    //Running the loop until the entered number equals 0 meaning there are no digits left
    while(n != 0) {

        //Using division to increment the number
        n /= 10;

        //increasing the counter per time the loop runs
        ++c;
    }

    //Outputting the result
    cout << "There are " << c << " digits in this number" << endl;

}
