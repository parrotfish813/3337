#include <iostream>
#include <cmath>

using namespace std;

void calculate(double &score);

double maxNum(double num1, double num2);

double maxChar(char char1, char char2);

int main() {

    double score = 50;

    calculate(score);

    cout << "Your score is " << score << endl;

    double num1, num2;

    cout << "Please enter 2 numbers: " << endl;

    cin >> num1 >> num2;

    cout << maxNum(num1, num2) << " is the larger number" << endl;

    char char1, char2;

    cout << "Please enter 2 letters: " << endl;

    cin >> char1 >> char2;

    char maxC = maxChar(char1, char2);

    cout << maxC << " is the larger letter" << endl;

    return 0;

}

void calculate(double &score){

    score = score - 10;

}

double maxNum(double num1, double num2) {

    if(num1 > num2){
        return num1;
    }
    if(num2 > num1){
        return num2;
    }

}

double maxChar(char char1, char char2) {

    if(char1 > char2) {
        return char1;
    }
    if(char2 > char1) {
        return char2;
    }

}