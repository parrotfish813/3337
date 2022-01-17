#include <iostream>
#include <vector>
#include <string>
#include "myVector.h"

using namespace std;

int main() {

    myVector<int> intVector;

    //Inserts a value at the beginning of the array
    intVector.insertBeg(4);

    cout << "Inserting a value to the beginning of the array: ";
    intVector.getVec();

    //Inserts a value at the end of the array
    intVector.insertEnd(10);

    cout << "Inserting a value to the end of the array: ";
    intVector.getVec();

    //Inserts a value at the end of the array
    intVector.insertEnd(23);

    cout << "Inserting a value to the end of the array: ";
    intVector.getVec();

    //Removed the first element of the array
    intVector.removeBeg();

    cout << "Removing a value to the beginning of the array: ";
    intVector.getVec();

    //Removed the last element of the array
    intVector.removeEnd();

    cout << "Removing a value to the end of the array: ";
    intVector.getVec();

    //Using user defined constructor to make a new array
    myVector<int> intVector2(10);

    //Inserts a value at the beginning of the array
    intVector2.insertBeg(12);

    //Inserts a value at the end of the array
    intVector2.insertEnd(56);

    cout << "Vector 2, user defined constructor: ";
    intVector2.getVec();

    //Copying the first array into a new array and then printing out the resulting array
    myVector<int> intVector3(intVector);

    cout << "Vector 3, copy constructor: ";
    intVector3.getVec();

    //Clearing the storage of the array
    intVector3.~myVector();

    cout << "Vector 3 after clearing: ";
    intVector3.getVec();

    return 0;

};