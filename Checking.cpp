// Copyright 2024 Jonathan Steele

#include "Checking.h"

void CheckingAccount::displayAccountInfo() const {
  cout << "Checking Account Information" << endl;
  Account::displayAccountInfo();
  cout << "Overdraft Limit: $" << overdraftLimit << "\n" << endl;
}

void CheckingAccount::makeWithdrawl(double amount) {
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
