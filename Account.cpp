#include "Account.h"

// Member functions
void Account::displayAccountInfo() const {
  cout << "Account Holder: " << accountHolderName << endl;
  cout << "Balance: $" << balance << endl;
}

void Account::makeDeposit(double amount) {
  if (amount <= 0) {
    throw invalid_argument("Amount must be positive");
  }
  balance += amount;
}

void Account::makeWithdrawal(double amount) {
  if (amount <= 0) {
    throw invalid_argument("Amount must be positive");
  }
  if (balance < amount) {
    throw invalid_argument("Insufficient funds for this withdrawal");
  }
  balance -= amount;
}

double Account::getBalance() const { return balance; }
