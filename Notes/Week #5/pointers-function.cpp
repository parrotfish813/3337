#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void swap1(int n1, int n2);
void swap2(int &n1, int &n2);
void swap3(int *p1, int *p2);

int main() {

    int a = 5;
    int * const p = &a;
    int b = 4;

    cout << *p << endl;

    swap1(a, b);
    cout << a << " " << b << endl;

    swap2(a, b);
    cout << a << " " << b << endl;

    int * x1 = &a;
    int * x2 = &b;

    swap3(x1, x2);
    cout << a << " " << b << endl;

};

void swap1(int n1, int n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap2(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap3(int *p1, int *p2) {
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}




