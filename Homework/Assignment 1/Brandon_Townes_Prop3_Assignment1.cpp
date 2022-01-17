#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main() {

    int i, q, r;

    cout << "Please enter a number:";

    cin >> i;

    //Checking to see if the number is negative and if so it will tell you it won't accept the number and end the program
    if (i < 0) {
        cout << "Program doesn't accept negative numbers." << endl;
        abort();
    }

    //Checking if the number is positive and less than 100
    if (i >= 0 && i <= 100) {

        //Calculating the quotient and the remainder
        r = i % 4;
        q = i / 4;

        //Checking if the remainder is 0 meaning the number is divisible by 4
        if (r == 0) {
            //Printing out confirmation that the number is divisible by 4 as well and the Quotient and remainder
            cout << "The given number (" << i << ") is divisible by 4" << endl;
            cout << "Quotient: " << q << " and Remainder: " << r << endl;
        }
        //If the above if statement isn't met this means the number is not divisible by 4 and there for it will print out a message informing you of this as well as the quotient and remainder
        else {
            cout << "The given number (" << i << ") is not divisible by 4" << endl;
            cout << "Quotient: " << q << " and Remainder: " << r << endl;
        }
    }

    //If the above if statement isn't met this means the number is greater then 100 and will there for calculate the square root and print out the info
    else {
        cout << "The entered number is greater then 100 and the square root of (" << i << ") is " << sqrt(i) << endl;
    }

    return 0;

}