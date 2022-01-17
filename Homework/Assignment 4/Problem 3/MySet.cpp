#include "MySet.h"

//Default constructor
MySet::MySet() {
    range = 0;
    size = 0;
    set = new bool[range];

    for(int i = 0; i <= range; i++) {
        set[i] = false;
    }

}

//User defined constructor
MySet::MySet(unsigned int newRange, unsigned int newSize) {
    range = newRange;
    size = newSize;
    set = new bool[range];

    for(int i = 0; i <= range; i++) {
        set[i] = false;
    }

}

//Copy constructor
MySet::MySet(const MySet &newSet) {
    range = newSet.getRange();
    size = newSet.getSize();
    set = newSet.set;
}

//Deconstructor
MySet::~MySet() {
    delete [] set;
}

//Get range function to get private range
unsigned int MySet::getRange() const {
    return range;
}

//Get size function to get private size
unsigned int MySet::getSize() const {
    return size;
}

//Inserting an element into the set
void MySet::insertElement(int k) {

    //If the element passed through is in the set already and in the range and if it is not adding it
    if(k <= range && set[k] == false) {
        set[k] = true;
    }

    else {
        cout << "Invalid insert attempt for the number " << k << endl;
    }
}

//Deleting an element from the set
void MySet::deleteElement(int m) {

    //If the element passed through is in the set already and in the range and if it is removing it
    if(m <= range && set[m] == true) {
        set[m] = false;
    }

    else {
        cout << "Invalid delete attempt for the number " << m << endl;
    }
}

//Checking if 2 sets are equal to each other
bool MySet::isEqualTo(const MySet &newSet) const {
    if(set == newSet.set) {
        return true;
    }
    else {
        return false;
    }
}

//Counting prime numbers in the set
int MySet::countPrimeNumbers() const {

    int c = 0;

    //Check every element of the set and use definition of prime to determine if prime
    for(int i = 0; i <= size; i++) {
        if(set[i] == true) {
            if (i % 2 != 0 && i % 3 != 0) {
                c++;
            }
        }
    }

    return c;
}

//Printing out the set
void MySet::printSet() const {
    cout << "{ ";

    //Looping through the set to print out any of the included numbers
    for(int i = 0; i <= size; i++) {
        if(set[i] == true) {
            cout << i << ", ";
        }
    }

    cout << " }" << endl;
}