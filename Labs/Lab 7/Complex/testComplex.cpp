#include <iostream>
#include "Complex.h"

using namespace std;

Complex additionTwo (Complex &comp1, Complex &comp2);
Complex additionArray(Complex complexArray[ ], int size);

int main() {

    //Declaring both complex numbers
    Complex num1;
    num1.setReal(2.4);
    num1.setImg(4.1);

    Complex num2(3.2, -3.6);

    //Calling the addition function from the Complex class and using printComplex to print out the result
    Complex temp = num2.addition(num1);
    temp.printComplex();
    cout << endl;

    //Calling the additionTwo function from the main file and using printComplex to print out the result
    Complex temp2 = additionTwo(num1, num2);
    temp2.printComplex();
    cout << endl;

    //Declaring an area of 4 complex numbers
    Complex complexUser[4] = {Complex(3.2, -3.6),
                              Complex(2.4, 5.1),
                              Complex(5.1, -2.1),
                              Complex(4.6, 3.8)};

    //Calling the additionArray function from the main file and using printComplex to print out the result
    Complex temp3 = additionArray(complexUser, 4);
    temp3.printComplex();
    cout << endl;

};

//Declaring the additionTwo function and taking in the address of the 2 objects passed through the function
Complex additionTwo (Complex &comp1, Complex &comp2) {

    Complex temp;

    //Adding the imaginary and real numbers from each imaginary number together and assigning the value to a temporary object
    temp.setImg(comp1.getImg() + comp2.getImg());
    temp.setReal(comp1.getReal() + comp2.getReal());

    return temp;

}

Complex additionArray(Complex complexArray[ ], int size) {

    Complex temp;

    //Using a for loop to cycle through the array in order to add ever imaginary number in the array together
    for(int i = 0; i < size; i++) {
        //Adding the imaginary and real numbers from each imaginary number together and assigning the value to a temporary object
        temp.setImg(complexArray[i].getImg() + temp.getImg());
        temp.setReal(complexArray[i].getReal() + temp.getReal());
    }

    return temp;

};




