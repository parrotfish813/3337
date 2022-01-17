#ifndef STOCK_H
#define STOCK_H

#include <string>

using namespace std;

class Stock {

//Defining public variables and functions
public:
    string symbol, name;
    double previousClosingPrice, currentPrice;

    Stock();
    Stock(string symbol, string name);

    void setSymbol(string symbol);
    void setName(string name);
    void setPreviousClosingPrice(double previousClosingPrice);
    void setCurrentPrice(double currentPrice);

    string getSymbol() const;
    string getName() const;
    double getPreviousClosingPrice() const;
    double getCurrentPrice() const;

    double getChangePercent() const;

    

};


#endif
