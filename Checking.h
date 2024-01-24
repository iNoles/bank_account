#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h"

using namespace std;

class CheckingAccount : public Account {
private:
  double overdraftLimit;

public:
  CheckingAccount(const string &holderName, double initialBalance,
                  double overdraft)
      : Account(holderName, initialBalance), overdraftLimit(overdraft) {}

  void displayAccountInfo() const {
    cout << "Checking Account Information" << endl;
    Account::displayAccountInfo();
    cout << "Overdraft Limit: $" << overdraftLimit << "\n" << endl;
  }

  void makeWithdrawl(double amount) {
    if (amount <= 0) {
      throw invalid_argument("amount must be postive");
    }
    balance -= amount;
    if (balance <= -overdraftLimit) {
      throw invalid_argument("overdraft went over of limit occcured");
    }
    if (balance <= 0) {
      throw invalid_argument("Not sufficient funds for this withdrawal");
    }
  }
};

#endif
