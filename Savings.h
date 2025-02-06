#ifndef SAVINGS_H_
#define SAVINGS_H_

#include "Account.h"
#include <optional>
#include <string_view>

class SavingsAccount : public Account {
private:
  std::optional<double> interestRate; // Optional interest rate

public:
  // Constructor
  SavingsAccount(std::string_view holderName, double initialBalance, std::optional<double> interest = std::nullopt)
      : Account(holderName, initialBalance), interestRate(interest) {}

  void displayAccountInfo() const override;
  void addInterest();
};

#endif // SAVINGS_H_
