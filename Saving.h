#ifndef SAVING_H 
#define SAVING_H 

#include "Account.h"

using namespace std;

class SavingsAccount: public Account {
    private:
    double interestRate;

    public:
    SavingsAccount(const string& holderName, double initialBalance, double interest)
        : Account(holderName, initialBalance), interestRate(interest) {}

    void displayAccountInfo() const {
    	cout << "Savings Account Information" << endl;
        Account::displayAccountInfo();
        cout << "Interest Rate: " << interestRate << "% \n" << endl;
    }

     void addInterest() {
        double interestAmount = balance * (interestRate / 100);
        balance += interestAmount;
    }
};

#endif