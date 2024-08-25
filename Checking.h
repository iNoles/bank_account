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

  void displayAccountInfo() const override;
  void makeWithdrawal(double amount) override;
};

#endif // CHECKING_H_
