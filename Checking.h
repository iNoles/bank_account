#ifndef CHECKING_H_
#define CHECKING_H_

#include "Account.h"
#include <optional>

class CheckingAccount : public Account {
private:
  std::optional<double> overdraftLimit; // Now using std::optional correctly

public:
  // Constructor: Use std::string_view for efficiency
  CheckingAccount(std::string_view holderName, double initialBalance, std::optional<double> overdraft = std::nullopt)
      : Account(holderName, initialBalance), overdraftLimit(overdraft) {}

  void displayAccountInfo() const override;
  void makeWithdrawal(double amount) override;
};

#endif // CHECKING_H_
