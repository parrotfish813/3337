#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car {

private:
    string color, brand, model;
    int year;
    double MPG;

public:
    Car();
    Car(string newColor, string newBrand, string newModel, int newYear, double newMPG);

    string getColor();
    string getBrand();
    string getModel();
    int getYear();
    double getMPG();

    void setColor(string newColor);
    void setBrand(string newBrand);
    void setModel(string newModel);
    void setYear(int newYear);
    void setMPG(double newMPG);

    bool compareEfficiency(Car &car2);

    void display();


};


#endif