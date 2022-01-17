#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void count(const string s, int size);

int main() {
	int counts;

  string str;

	//Enter a string of characters
	cout << "Enter a string: "; 
	getline(cin , str);

  int l = str.length();

	count(str, l);

	return 0;

}

void count(const string s, int size) {

  int count = 0;
  string newS = s;

  //First for loop to loop through every letter
  for(char c = 'a'; c <= 'z'; c++) { 
    //Second loop to increment through each letter in the string 
    for(int i = 0; i <= size; i++) {
      //Converting each letter to a lowercase
      newS[i] = tolower(s[i]);

      //Checking the indavidul letters against each letter of the alphabet 
      if(c == newS[i]) {
        count++;
      }

    }

    //If the letter is in the word, print out the number of instances it appears 
    if(count != 0) {

      cout << c << ": " << count << " times" << endl;
      count = 0;

    }
  }
}
