#include "Checking.h"

void CheckingAccount::displayAccountInfo() const {
  cout << "Checking Account Information" << endl;
  Account::displayAccountInfo();
  cout << "Overdraft Limit: $" << overdraftLimit << "\n" << endl;
}

void CheckingAccount::makeWithdrawal(double amount) {
  if (amount <= 0) {
    throw invalid_argument("Amount must be positive");
  }
  if (balance - amount < -overdraftLimit) {
    throw invalid_argument("Withdrawal would exceed overdraft limit");
  }
  balance -= amount;
}
