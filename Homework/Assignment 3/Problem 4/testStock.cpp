#include <iostream>
#include <iomanip>
#include "Stock.h"

using namespace std;

int main() {

    //Declaring the object and setting each value
    Stock s1("MSFT", "Microsoft Corporation");
    s1.setPreviousClosingPrice(27.5);
    s1.setCurrentPrice(27.6);

    //Printing out the previous and current prices using the corresponding get functions and then calling the get change percent function ot print out the change percentage
    cout << "Previous Closing Price: " << s1.getPreviousClosingPrice() << endl;
    cout << "Current Price: " << s1.getCurrentPrice() << endl;
    cout << "Percentage Change: " << s1.getChangePercent() << endl;

    return 0;

};



