#include "Account.h"

void Account::displayAccountInfo() const {
  std::cout << "Account Holder: " << accountHolderName << "\n"
            << "Balance: $" << balance << std::endl;
}

void Account::makeDeposit(double amount) {
  if (amount <= 0) throw std::invalid_argument("Amount must be positive");
  balance += amount;
  transactionHistory.emplace_back("Deposited: $" + std::to_string(amount)); // Use emplace_back for efficiency
}

void Account::makeWithdrawal(double amount) {
  if (amount <= 0) throw std::invalid_argument("Amount must be positive");
  if (balance < amount) throw std::invalid_argument("Insufficient funds for this withdrawal");
  balance -= amount;
  transactionHistory.emplace_back("Withdrew: $" + std::to_string(amount));
}

double Account::getBalance() const { return balance; }

std::string_view Account::getAccountHolderName() const { return accountHolderName; }

void Account::displayTransactionHistory() const {
  std::cout << "Transaction History for " << accountHolderName << ":\n";
  if (transactionHistory.empty()) {
    std::cout << "No transactions yet.\n";
  } else {
    for (const auto &entry : transactionHistory) {
      std::cout << "- " << entry << std::endl;
    }
  }
  std::cout << std::endl;
}

std::optional<std::string> Account::getLastTransaction() const {
  if (!transactionHistory.empty()) {
    return transactionHistory.back(); // Return last transaction
  }
  return std::nullopt; // Return empty optional if no transactions exist
}
