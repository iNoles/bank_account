#ifndef SAVINGS_H_
#define SAVINGS_H_

#include "Account.h"

class SavingsAccount : public Account {
private:
  double interestRate;

public:
  SavingsAccount(const string &holderName, double initialBalance,
                 double interest)
      : Account(holderName, initialBalance), interestRate(interest) {}

  void displayAccountInfo() const override;
  void addInterest();
};

#endif // SAVINGS_H_
