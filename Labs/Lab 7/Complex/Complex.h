#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {

//Declaring the real and imaginary numbers under private
private:
    double real, img;

//Declaring all of my constructors and functions to be used in the Complex.cpp file
public:
    Complex();
    Complex(double newReal, double newImg);

    double getReal();
    double getImg();

    void setReal(double newReal);
    void setImg(double newImg);

    void printComplex();

    Complex addition (Complex &comp);

};

#endif
