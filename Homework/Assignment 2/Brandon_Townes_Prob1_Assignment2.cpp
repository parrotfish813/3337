#include <iostream>
#include <string>

using namespace std;

int evenCount(int value);

int main() {

    int value;

    cout << "Enter a number: " << endl;
    cin >> value;

    cout << "The number of even integers is: " << evenCount(value) << endl;

};

//The function that will check the number of even integers 
int evenCount(int value) {

    static int evenDigits = 0, digit;

    //Singling out the digit that will be checked 
    digit = value % 10;

    //If the value equals 0, return the number of even digits
    if(value == 0) {
      return evenDigits;
    }

    //If the digit is an even number add one to the counter
    else if(digit % 2 == 0) {
        evenDigits++;
    }

    //Using recursion to increment the origonal number by 1 digit
    return evenCount(value / 10); 
}

