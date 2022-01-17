#include <iostream>
#include <string>

using namespace std;

void func1(const int arr[], int arr2[], int sizeOfArrays);

int main() {

    int x[3] = {5, 6, 7};

    int y[3] = {5, 6, 7};

    func1(x, y, 3);

    for(int i = 0; i < 3; i++) {
        cout << y[i] << endl;
    }

    cout << *(x + 2) << endl;

};

void func1(const int arr[], int arr2[], int sizeOfArrays) {
    for(int i = 0; i < sizeOfArrays; i++){
        arr2[i] = arr2[i] + 1;
    }
}
