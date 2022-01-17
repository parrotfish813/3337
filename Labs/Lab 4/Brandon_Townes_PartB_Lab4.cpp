#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//Prototyping my function
double series(int n);

int  main() {

  cout << "n" << setw(13) << "Result" << endl; 
  
  //Calling my function
  series(15);

}

//Declaring my actual function
double series(int n) {

  //Decalring a sum varible to keep track of the result each time
  double sum = 1/pow(n, 2);

  //Stopping the code if the number drops bellow 1
  if(n < 1) {

    return 0;

  }

  else {
    //Using recurion to loop through each number and add it to the sum
    sum += series(n - 1);
    //Printing the new numbers after every loop
    cout << "n = " << n << "\t" << sum << endl;

  }

  return sum;

}
