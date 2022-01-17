#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;

    cout << "Enter the number of lines: ";

    cin >> num;

    for (int current = 1; current <= num; ++current) {
        for(int spaces = 0; spaces < num - current; ++spaces)
            cout << "   ";

        for(int number = current; number; --number)
            cout << setw(2) << right << number << " ";

        for (int number = 2; number <= current; ++number)
            cout << setw(2) << right << number << " ";

        cout << "\n";
    }
}

