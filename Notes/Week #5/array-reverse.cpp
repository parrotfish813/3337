#include <iostream>
#include <string>

using namespace std;

void reverse(const int list[], int newList[], int size);

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int newArr[5];

    reverse(arr, newArr, 5);

    for(int i = 0; i < 5; i++) {
        cout << newArr[i] << endl;
    }

};

void reverse(const int list[], int newList[], int size) {

    for(int i = 0, j = size - 1; i < size; i++, j--) {
        newList[j] = list[i];
    }

}
