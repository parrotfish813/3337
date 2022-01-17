#include <iostream>
#include <string>

using namespace std;

template<typename T>
T minimum(T arr[], int size) {

    //Assigning the first element of the array to a temp variable
    T temp = arr[0];

    //Comparing the first element of the array to every other element to find the smallest element of the array
    for(int i = 0; i < size; i++) {
        if(temp > arr[i]) {
            temp = arr[i];
        }
    }

    return temp;
}

int main() {

    //Declaring an array of integers, doubles, and strings 
    int arr1[10] = {3, 5, 1, 89, 34, 10, 5, 7, 32, 54};
    double arr2[10] = {3.8, 5.1, 89.2, 34.7, 10.22, 5.34, 7.8, 3.2, 54.4, 13.5};
    string arr3[5] = {"Hello", "Goodbye", "Goodmorning", "Goodnight", "Good"};

    //Printing out the smallest variable of each array
    cout << minimum(arr1, 10) << " is the minimum value in the array" << endl;
    cout << minimum(arr2, 10) << " is the minimum value in the array" << endl;
    cout << minimum(arr3, 5) << " is the minimum value in the array" << endl;

    return 0;

};