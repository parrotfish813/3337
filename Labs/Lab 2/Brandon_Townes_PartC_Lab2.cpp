#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;

    //Asking for the user's input
    cout << "The first number is: " << a << endl;
    cout << "The second number is: " << b <<  endl;

    if (a / b)
        cout << a << " is divisible by " << b << endl;

    else
        cout << a << " is not divisible by " << b << endl;

    return 0;

}