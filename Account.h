// Copyright 2024 Jonathan Steele

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
  virtual void displayAccountInfo() const;
  virtual void makeDeposit(double amount);
  virtual void makeWithdrawl(double amount);
  virtual double getBalance();
};

#endif // ACCOUNT_H_
