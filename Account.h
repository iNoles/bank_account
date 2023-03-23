#ifndef ACCOUNT_H 
#define ACCOUNT_H 

#include <iostream>

using namespace std;

class Account {
    private:
    string name;
    double balance;

    public:
    Account(string name, double initialBalance) {
        this->name = name;
        balance = initialBalance;
    }
    void makeDeposit(double amount) {
        if (amount <= 0) {
            throw invalid_argument("amount must be postive");
        }
        balance += amount;
    }
    void makeWithdrawl(double amount) {
        if (amount <= 0) {
            throw invalid_argument("amount must be postive");
        }
        balance -= amount;
        if (balance <= 0) {
            throw invalid_argument("Not sufficient funds for this withdrawal");
        }
    }
    double getBalance() {
        return balance;
    }
};

#endif