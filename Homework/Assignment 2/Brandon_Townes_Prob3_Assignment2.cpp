#include <iostream>

using namespace std;

int main() {

    int n, max, count = 0;

    //Getting the first number from the user
    cout << "Enter numbers: " << endl;

    cin >> n;

    //Setting the inputted number to the current max
    max = n;

    count = 1;

    //A do while loop that runs as long as long as the user doesn't equal 0
    do {

        cin >> n;

        //Checking if the new number is the same as the max, if so add 1 to the count
        if(n == max) {
            count++;
        }

        //If the new number is bigger then the old max, set it as the max and reset the count to 1
        else if(n > max) {
            max = n;
            count = 1;
        }

    } while(n != 0);

    cout << "The largest number is " << max << endl;
    cout << "The occurrence of your max number is " << count << endl;

};






