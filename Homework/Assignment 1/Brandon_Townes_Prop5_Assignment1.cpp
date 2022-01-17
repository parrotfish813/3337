#include <iostream>

using namespace std;

int main() {

    //Declaring the variable
    int ASCII;

    //Prompting the user to input a number
    cout << "Enter a ASCII number:" << endl;

    //Allowing the user to input the number
    cin >> ASCII;

    //Checking if the number is an ASCII number
    if (ASCII >= 0 && ASCII <= 127) {
        //Converting the number into the character
        char l = ASCII;
        //Outputting the resulting letter
        cout << "The character is " << l << endl;
    }

    //If the number is not an ASCII number informing the user
    else {
        cout << "This is not an ASCII number" << endl;
    }


    return 0;

}

