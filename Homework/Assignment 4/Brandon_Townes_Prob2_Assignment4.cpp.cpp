#include <iostream>
#include <string>

using namespace std;

//Creating a template function that takes in 2 arrays of any time and the size of the arrays
template<class T>
bool isGreater(const T arr1[], const T arr2[], int size1, int size2) {

    //Assigning the first element of the first array to a variable and declaring a value to be returned
    T largest = arr1[0];
    bool flag = true;

    //Checking the first element of the first array against every other element and if one of the elements is larger, replacing the largest variable with that
    for (int i = 0; i < size1; i++) {
        if (arr1[i] > largest) {
            largest = arr1[i];
        }
    }

    //Comparing each variable of the second array to the largest element of the first array
    //If all of the elements of the second array are larger than the largest element of the first array return true
    //Otherwise return false
    for (int i = 0; i < size2; i++) {
        if (!(arr2[i] > largest)) {
            flag = false;
        }
    }
    return flag;
}

int main() {

    //Creating 2 arrays of the type integer, double, and string
    int arr1[] = {1, 2, 3, 4, 5, 10, 12, 14, 32, 54};
    int arr2[] = {300, 500, 89, 340, 100, 500, 70, 305};
    double arr3[] = {3.4, 5.8, 1.1, 89.43, 34.26, 10.8, 5.56, 7.7, 32.23, 54.63};
    double arr4[] = {3.12, 5.5, 89.1, 34.32, 10.15, 5.6, 7.4, 3.9};
    string arr5[] = {"a", "b", "c", "d", "e"};
    string arr6[] = {"v", "w", "x", "y", "z"};

    //Finding the size of each of the arrays
    int arr1_size = sizeof(arr1)/sizeof(arr1[0]),
        arr2_size = sizeof(arr2)/sizeof(arr2[0]),
        arr3_size = sizeof(arr3)/sizeof(arr3[0]),
        arr4_size = sizeof(arr4)/sizeof(arr4[0]),
        arr5_size = sizeof(arr5)/sizeof(arr5[0]),
        arr6_size = sizeof(arr6)/sizeof(arr6[0]);

    //Assigning the returned true or false variable from comparing the arrays to a variable
    bool flag1 = isGreater(arr1, arr2,arr1_size, arr2_size),
         flag2 = isGreater(arr3, arr4, arr3_size, arr4_size),
         flag3 = isGreater(arr5, arr6, arr5_size, arr6_size);

    //Printing the appropriate response to the returned outcome of the function using if statements
    if(flag1 == true) {
        cout << "Every element of integer array 2 is greater then that of integer array 2." << endl;
    }
    else {
        cout << "Every element of integer array 2 is not greater then that of integer array 2." << endl;
    }

    if(flag2 == true) {
        cout << "Every element of double array 2 is greater then that of double array 1." << endl;
    }
    else {
        cout << "Every element of double array 2 is not greater then that of double array 2." << endl;
    }

    if(flag3 == true) {
        cout << "Every element of string array 2 is greater then that of string array 1." << endl;
    }
    else {
        cout << "Every element of string array 2 is not greater then that of string array 1" << endl;
    }

    return 0;

}