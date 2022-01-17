#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double ft;

    cout << "Meters" << setw(10) << "Feet" << endl;

    for(double m = 1; m <= 15; m++) {
        ft = 3.280 * m;
        cout << fixed << setprecision(0) << m << setw(10);
        cout << fixed << setprecision(3) << ft << endl;
    }

    return 0;

}

