#include <iostream>
#include <vector>
#include <string>
#include "Stack.h"

using namespace std;

int main() {

    vector<int> intVector;

    for(int i = 0; i < 10; i++) {
        intVector.push_back(i + 1);
    }

    for(int i = 0; i < 10; i++) {
        cout << intVector[i] << " ";
    }
    cout << endl;

    vector<string> stringVector;

    stringVector.push_back("Dallas");
    stringVector.push_back("Houston");
    stringVector.push_back("Austin");
    stringVector.push_back("Norman");

    for(int i = 0; i < 4; i++) {
        cout << stringVector[i] << " ";
    }
    cout << endl;

    stringVector.pop_back();

    vector<string> stringVector2;

    stringVector2.swap(stringVector);

    return 0;

};