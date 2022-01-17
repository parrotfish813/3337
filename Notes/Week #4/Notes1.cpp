#include <iostream>
#include <cmath>
using namespace std;

void t1() {

    static int x = 1;
    int y = 1;

    x++;
    y++;

    cout << x << endl;
    cout << y << endl;

}

int factorial(int n) {

    if(n==1){
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }


}

void f(int n) {
    if(n > 0) {
        f(n - 1);
        cout << n << " ";
    }
}

void f2(int n) {
    if(n > 0) {
        cout << n << " ";
        f(n - 1);
    }
}

int main() {

    t1();

    t1();

    f(5);

    cout << endl;

    f2(5);

    cout << endl;

    int f;
    int result = 1;

    cout << "Please enter a factorial: " << endl;
    cin >> f;

    cout << factorial(f) << endl;

    if(f==1){
        cout << 1 << endl;
    }
    else {
        for(int i = 1; i <= f; i++){
            result = result * i;
        }
        cout << result << endl;
    }

    return 0;
}