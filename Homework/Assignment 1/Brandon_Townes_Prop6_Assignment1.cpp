#include <iostream>

using namespace std;

int main() {

    //Declaring the variable
    int i, first, tens, hundreds, sum;

    //Prompting the user to input a number
    cout << "Enter a number between 0 and 1000:" << endl;

    //Allowing the user to input the number
    cin >> i;

    //Finding the first digit of the number and assigning it to the first variable and then removing that digit from the number
    first = i % 10;
    i /= 10;

    //Finding the second digit of the number and assigning it to the tens variable and then removing that digit from the number
    tens = i % 10;
    i /= 10;

    //Finding the third digit of the number and assigning it to the hundreds variable and then removing that digit from the number
    hundreds = i % 10;
    i /= 10;

    //Calculating the sum of the digits
    sum = first + tens + hundreds;

    //Printing the resulting sum
    cout << "The sum of the digits is " << sum << endl;

    return 0;

}

