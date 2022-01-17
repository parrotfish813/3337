#include <iostream>
#include <string>

using namespace std;


int main() {

   int o = 100;
   int *p = &o;

   //Same thing
   cout << o << endl;
   cout << *p << endl;

    //Same thing
   cout << &o << endl;
   cout << p << endl;

   cout << &p << endl;

   //Make your own data type
   typedef int * intPtr;

   intPtr r;

   *r = o;

   cout << *r << endl;



};

