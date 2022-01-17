#include <iostream>
#include <string>

using namespace std;

//Prototyping my function
string swapCase(const string& input);

int  main() {

  string str;

  cout << "Please enter a string: " << endl;
  getline(cin, str);

  cout << swapCase(str) << endl;

}

//Declaring my actual function
string swapCase(const string& str) {

  //Getting the entered stings lenght
  int ln = str.length();

  //Assigning the entered string to a new string in order to no edit the old string
  string newStr = str;

  //Loop that will run for as many leters there are in the string
  for(int i = 0; i < ln; i++) {

    //Checking if the leter in the specific position is lowercase and then swaping it to uppercase
    if(str[i] >= 'a' && str[i] <= 'z'){
      newStr[i] = newStr[i] - 32;
    }

    //Checking if the leter in the specific position is uppercase and then swaping it to lowercase
    else if (str[i] >= 'A' && str[i] <= 'Z'){
      newStr[i] = newStr[i] + 32;
    }

  }

  //Returning the new string
  return newStr;

}
