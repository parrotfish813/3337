#include <iostream>
#include <cmath>
using namespace std;

int binarySearch(const int n[], int key, int low, int high);

int main() {

    int list[10] = {3, 6, 8, 10, 12, 15, 17, 22, 25, 26};
    int indexResult = binarySearch(list, 25, 0, 9);

    cout << indexResult << endl;

    return 0;
}

int binarySearch(const int n[], int key, int low, int high) {

     if(low > high){
         cout << "Couldn't find the key in the array!" << endl;
         return -1;
     }
     else {
         int mid = (low + high) / 2;

         if(key == n[mid]){
             return mid;
         }

         else if(key > n[mid]) {
             return binarySearch(n, key, mid + 1, high);
         }
         else if(key < n[mid]) {
             return binarySearch(n, key, low, mid - 1);
         }
     }

}