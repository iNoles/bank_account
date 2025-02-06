#include "Savings.h"
#include <iostream>
#include <iomanip> // For fixed and setprecision

void SavingsAccount::displayAccountInfo() const {
    std::cout << "Savings Account Information\n";
    Account::displayAccountInfo();
    
    if (interestRate.has_value()) {
        std::cout << "Interest Rate: " << std::fixed << std::setprecision(2) << *interestRate << "%\n\n";
    } else {
        std::cout << "No interest rate assigned.\n\n";
    }
}

void SavingsAccount::addInterest() {
    if (interestRate.has_value()) {
        double interestAmount = balance * (*interestRate / 100.0);
        balance += interestAmount;
        transactionHistory.emplace_back("Interest Added: $" + std::to_string(interestAmount));
    } else {
        std::cerr << "Interest rate is not set. No interest added.\n";
    }
}
