#include "Checking.h"
#include <iostream>

void CheckingAccount::displayAccountInfo() const {
    std::cout << "Checking Account Information\n";
    Account::displayAccountInfo();
    
    if (overdraftLimit.has_value()) {
        std::cout << "Overdraft Limit: $" << *overdraftLimit << "\n\n";
    } else {
        std::cout << "No overdraft protection.\n\n";
    }
}

void CheckingAccount::makeWithdrawal(double amount) {
    if (amount <= 0) {
        throw std::invalid_argument("Amount must be positive");
    }

    double allowedOverdraft = overdraftLimit.value_or(0.0);
    if (balance - amount < -allowedOverdraft) {
        throw std::invalid_argument("Withdrawal would exceed overdraft limit");
    }

    balance -= amount;
    transactionHistory.emplace_back("Withdrew: $" + std::to_string(amount));
}
