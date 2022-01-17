#include "MySet.h"

int main() {

    //Declaring first set
    MySet set1(20, 20);

    //Inserting elements into the array
    set1.insertElement(13);
    set1.insertElement(7);
    set1.insertElement(20);
    set1.insertElement(21);

    set1.printSet();

    //Deleting elements from set
    set1.deleteElement(22);
    set1.deleteElement(13);

    set1.printSet();

    //Printing the number of prime numbers
    cout << "Number of prime numbers: " << set1.countPrimeNumbers() << endl;

    //Declaring second set
    MySet set2(100, 100);

    set2.printSet();

    //Declaring third set using the first set
    MySet set3(set1);

    //Checking if the first array is equal to the third set
    if(set1.isEqualTo(set3) == true) {
        cout << "Set 1 is equal to Set 3" << endl;
    }

    else {
        cout << "Set 1 is not equal to Set 3" << endl;
    }

    return 0;

}