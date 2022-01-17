#include <iostream>
#include <cmath>

using namespace std;

char getGrade(double score);

int main() {

    char result = getGrade(85);

    cout << "Your grade is a " << result << endl;

    return 0;

}

char getGrade(double score) {

    if(score >= 90){
        return 'A';
    }
    if(score >= 80){
        return 'B';
    }
    if(score >= 70){
        return 'C';
    }
    if(score >= 60){
        return 'D';
    }
    if(score >= 50){
        return 'F';
    }

}