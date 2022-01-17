#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;

    //Asking for the user's input
    cout << "Enter a string with 5 lowercase letters:" << endl;

    //Accepting and recording the user's input
    cin >> str;

    //Using if statement to check uf the first and last, and then second and 4th letter are the same and printing that it is a palindrome
    if ((str.at(0) == str.at(4)) && ((str.at(1) == str.at(3)))) {
            cout << "It is a palindrome!!" << endl;
    }

    //If the above if statement isn't met it will print that it isn't a palindrome
    else {
        cout << "It is not a palindrome!!" << endl;
    }

    return 0;

}