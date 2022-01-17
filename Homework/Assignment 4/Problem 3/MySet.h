#ifndef MYSET_H
#define MYSET_H

#include <iostream>

using namespace std;

class MySet {

//Declaring private variables
private:
    unsigned int range;
    unsigned int size;
    bool *set;

//Declaring public functions
public:
    MySet();
    MySet(unsigned int newRange, unsigned int newSize);
    MySet(const MySet &newSet);
    ~MySet();

    unsigned int getRange() const;
    unsigned int getSize() const;

    void insertElement(int k);
    void deleteElement(int m);

    bool isEqualTo(const MySet &newSet) const;
    int countPrimeNumbers() const;

    void printSet() const;

};

#endif
