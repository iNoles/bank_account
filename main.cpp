#include "Checking.h"
#include "Savings.h"

int main() {
  // Create a checking account
  CheckingAccount checking("Alice Johnson", 1000.0, 500.0);
  checking.displayAccountInfo();

  checking.makeWithdrawal(500.0);
  cout << "After Withdrawal: $" << checking.getBalance() << endl;

  checking.makeDeposit(100.0);
  cout << "After Deposit: $" << checking.getBalance() << "\n" << endl;

  // Display final account information
  checking.displayAccountInfo();

  // Create a savings account
  SavingsAccount savings("Bob Smith", 2000.0, 3.5);
  savings.displayAccountInfo();

  // Perform transactions
  savings.makeDeposit(500.0);
  cout << "After Deposit: $" << savings.getBalance() << "\n" << endl;

  savings.addInterest();

  // Display final account information
  savings.displayAccountInfo();

  return 0;
}
