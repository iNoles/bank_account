Copyright 2024 Jonathan Steele

#ifndef SAVING_H_
#define SAVING_H_

#include "Account.h"

class SavingsAccount : public Account {
private:
  double interestRate;

public:
  SavingsAccount(const string &holderName, double initialBalance,
                 double interest)
      : Account(holderName, initialBalance), interestRate(interest) {}

  void displayAccountInfo() const {
    using std::cout;
    using std::endl;
    cout << "Savings Account Information" << endl;
    Account::displayAccountInfo();
    cout << "Interest Rate: " << interestRate << "% \n" << endl;
  }

  void addInterest() {
    double interestAmount = balance * (interestRate / 100);
    balance += interestAmount;
  }
};

#endif // SAVING_H_
