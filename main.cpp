#include "Checking.h"
#include "Savings.h"
#include <iostream>

int main() {
  try {
    // Create a checking account
    CheckingAccount checking("Alice Johnson", 1000.0, 500.0);
    checking.displayAccountInfo();

    // Perform transactions
    checking.makeWithdrawal(500.0);
    std::cout << "After Withdrawal: $" << checking.getBalance() << std::endl;
    checking.displayTransactionHistory();

    checking.makeDeposit(100.0);
    std::cout << "After Deposit: $" << checking.getBalance() << "\n" << std::endl;
    checking.displayTransactionHistory();

    // Display final account information
    checking.displayAccountInfo();

    // Create a savings account
    SavingsAccount savings("Bob Smith", 2000.0, 3.5);
    savings.displayAccountInfo();

    // Perform transactions
    savings.makeDeposit(500.0);
    std::cout << "After Deposit: $" << savings.getBalance() << "\n" << std::endl;
    savings.displayTransactionHistory();

    savings.addInterest();
    std::cout << "After Interest: $" << savings.getBalance() << "\n" << std::endl;

    // Display final account information
    savings.displayAccountInfo();
    savings.displayTransactionHistory();

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}
