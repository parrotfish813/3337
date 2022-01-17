#include "Stock.h"

using namespace std;

Stock::Stock() {

    symbol = "Default";
    name = "Default";
    previousClosingPrice = 0.0;
    currentPrice = 0.0;

}

Stock::Stock(string newSymbol, string newName) {

    symbol = newSymbol;
    name = newName;

}

//Set function for the symbol
string Stock::getSymbol() const {
    return symbol;
}

//Set function for the name
string Stock::getName() const {
    return name;
}

//Set function for the previous closing price
double Stock::getPreviousClosingPrice() const {
    return previousClosingPrice;
}

//Get function for the current price
double Stock::getCurrentPrice() const {
    return currentPrice;
}

//Set function for the symbol
void Stock::setSymbol(string newSymbol) {
    symbol = newSymbol;
}

//Set function for the name
void Stock::setName(string newName) {
    name = newName;
}

//Set function for the previous closing price
void Stock::setPreviousClosingPrice(double newPreviousClosingPrice) {
    previousClosingPrice = newPreviousClosingPrice;
}

//Set function for the current price
void Stock::setCurrentPrice(double newCurrentPrice) {
    currentPrice = newCurrentPrice;
}

//Using the change percentage equation and using the info from the object used to declare this function to find the change percentage
double Stock::getChangePercent() const {

    return ((currentPrice - previousClosingPrice) / previousClosingPrice) * 100;

}