#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Account {

    public:
        int ID;
        double balance, annualInterestRate;

    Account() {
        ID = 0;
        balance = 0.0;
        annualInterestRate = 0.0;
    };

    Account(int newID, double newBalance, double newAnnualInterestRate) {
        ID = newID;
        balance = newBalance;
        annualInterestRate = newAnnualInterestRate;
    }

    double getMonthlyInterestRate() {
        double monthlyInterestRate = annualInterestRate / 12;
        return monthlyInterestRate;
    }

    void withdraw(double amount) {
        balance = balance - amount;
        cout << "Your current balance is: " << balance << endl;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Your current balance is: " << balance << endl;
    }
};


int main() {

    Account acc1(1122, 20000, 4.5);

    acc1.withdraw(2500);
    acc1.deposit(3000);
    cout << "Your monthly interest rate is: " << acc1.getMonthlyInterestRate() << endl;

};


