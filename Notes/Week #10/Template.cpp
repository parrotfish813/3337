#include <iostream>

using namespace std;

template<typename T, typename U>
T maxValue(T value1, U value2) {
    if(value1 > value2) {
        return value1;
    }
    else {
        return value2;
    }
}

int main() {

    cout << maxValue(1, 3) << endl;

    return 0;

};