#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <stdexcept>
#include <string>
#include <vector>
#include <optional>
#include <string_view>
#include <iostream>

class Account {
protected:
  std::string accountHolderName;
  double balance;
  std::vector<std::string> transactionHistory;

public:
  // Constructor using std::string_view to avoid unnecessary copies
  Account(std::string_view holderName, double initialBalance)
      : accountHolderName(holderName), balance(initialBalance) {}

  virtual ~Account() = default; // Virtual destructor for proper cleanup

  // Member functions
  virtual void displayAccountInfo() const;
  virtual void makeDeposit(double amount);
  virtual void makeWithdrawal(double amount);
  
  // Getters
  double getBalance() const;
  std::string_view getAccountHolderName() const;

  // Transaction history
  void displayTransactionHistory() const;
  std::optional<std::string> getLastTransaction() const; // Optional last transaction
};

#endif // ACCOUNT_H_
