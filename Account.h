Copyright 2024 Jonathan Steele
  
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
  string accountHolderName;
  double balance;

public:
  // Constructor
  Account(const string &holderName, double initialBalance)
      : accountHolderName(holderName), balance(initialBalance) {}

  // Member functions
  virtual void displayAccountInfo() const {
    cout << "Account Holder: " << accountHolderName << endl;
    cout << "Balance: $" << balance << endl;
  }
  virtual void makeDeposit(double amount) {
    if (amount <= 0) {
      throw invalid_argument("amount must be postive");
    }
    balance += amount;
  }
  virtual void makeWithdrawl(double amount) {
    if (amount <= 0) {
      throw invalid_argument("amount must be postive");
    }
    balance -= amount;
    if (balance <= 0) {
      throw invalid_argument("Not sufficient funds for this withdrawal");
    }
  }
  virtual double getBalance() { return balance; }
};

#endif // ACCOUNT_H_
