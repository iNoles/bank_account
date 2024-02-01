// Copyright 2024 Jonathan Steele

#include "Account.h"

// Member functions
void Account::displayAccountInfo() const {
  cout << "Account Holder: " << accountHolderName << endl;
  cout << "Balance: $" << balance << endl;
}

void Account::makeDeposit(double amount) {
  if (amount <= 0) {
    throw invalid_argument("amount must be postive");
  }
  balance += amount;
}

void Account::makeWithdrawl(double amount) {
  if (amount <= 0) {
    throw invalid_argument("amount must be postive");
  }
  balance -= amount;
  if (balance <= 0) {
    throw invalid_argument("Not sufficient funds for this withdrawal");
  }
}

double Account::getBalance() { return balance; }
