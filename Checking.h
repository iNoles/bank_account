// Copyright 2024 Jonathan Steele

#ifndef CHECKING_H_
#define CHECKING_H_

#include "Account.h"

class CheckingAccount : public Account {
private:
  double overdraftLimit;

public:
  CheckingAccount(const string &holderName, double initialBalance,
                  double overdraft)
      : Account(holderName, initialBalance), overdraftLimit(overdraft) {}

  void displayAccountInfo() const;
  void makeWithdrawl(double amount);
};

#endif // CHECKING_H_
