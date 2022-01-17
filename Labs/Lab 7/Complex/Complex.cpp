#include "Complex.h"
#include <iostream>

using namespace std;

//Assigning the default values to my object
Complex::Complex() {
    real = 0.0;
    img = 0.0;
}

//Allowing user defined values for the real and imagniary numbers
Complex::Complex(double newReal, double newImg) {
    real = newReal;
    img = newImg;
}

//Allowing the user to access the real number as it is private and can't be accessed normally
double Complex::getReal() {
    return real;
}

//Allowing the user to access the imaginary number as it is private and can't be accessed normally
double Complex::getImg() {
    return img;
}

//Allowing the user to set the real number as it is private and can't be accessed normally
void Complex::setReal(double newReal) {
    real = newReal;
}

//Allowing the user to set the imaginary number as it is private and can't be accessed normally
void Complex::setImg(double newImg) {
    img = newImg;
}

//Printing out the imaginary number in proper form
void Complex::printComplex() {

    //Checking if the imaginary number os negative, if it is change the number to positive and put - instead of +
    if(img < 0) {
        double temp = -img;
        cout << "Complex number: " << real << " - " << temp << "i" << endl;
    }
    //Else just print out in proper form
    else {
        cout << "Complex number: " << real << " + " << img << "i" << endl;
    }
}

//Creating a function in the class to add the imaginary number that is passed through the function with the imaginary number the user declares with the function
Complex Complex::addition(Complex &comp1) {

    Complex temp;

    temp.setImg(img + comp1.getImg());
    temp.setReal(real + comp1.getReal());

    return temp;
}


