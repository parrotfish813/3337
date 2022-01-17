#include <iostream>

using namespace std;

int * reverse(const int *list, int size);
void printArray(const int *arr, int size);

int main() {

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = reverse(arr1, 10);

    printArray(p, 10);

    //It frees up space for the computer to use for whatever it needs, but it might not have time to use all the space
    delete p;

    printArray(p, 10);

    return 0;

};

int * reverse(const int *list, int size) {

    //Stores the array on the heap as apposed to in the stack
    //The heap has more storage and prevents stack overflow however it is slower than storing it on the stack
    int * results = new int[size];

    for(int i = 0; i < size; i++) {
        results[i] = list[size - i - 1];
    }

    return results;

}

void printArray(const int *arr, int size) {

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}

