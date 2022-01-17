#include <iostream>

//Using this you no longer have to declair std when using the standard functions 
using namespace std;

int main() {

  //std indicates that the function is from the standard library

  // endl; is used to move to the next line just like \n in C
  std::cout << "Hello my minions" << std::endl;

  // \n still works in C++
  std::cout << "You shall do my biding\n";

  //Without either of the above it will not move to next line
  std::cout << "I will rule this world";

  //Example of not having to use std when declaring name space 
  cout << " I am you're boss now" << endl;

  //Writing math with double quotes will print it as a sting
  cout << "(7.2 + 3 * 5) / (23 - 7.8) = ";

  //Writing math without the double quotes will do whatever calculations are contained in the cout statement 
  cout << (7.2 + 3 * 5) / (23 - 7.8) << endl;

  cout << "(8 - 3 * 2) / (4 / 2 + 1) = ";

  //If you only use integer numbers it will print as an integer
  cout << (8 - 3 * 2) / (4 / 2 + 1) << endl;

  cout << "(8 - 3 * 2) / (4 / 2 + 1) = ";

  //Making even 1 number a float will give a float answer
  cout << (8.0 - 3 * 2) / (4 / 2 + 1) << endl;

  cout << "(8 - 3 * 2) / (4 / 2 + 1) = ";

  //You can declair a varible that can then be used just like in C
  double result = (8.0 - 3 * 2) / (4 / 2 + 1);

  //You don't need to declair the type of varible when printing you only need to add the name of the varible 
  cout << result << endl;

  return 0;
  
}