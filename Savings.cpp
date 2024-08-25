#include "Savings.h"

void SavingsAccount::displayAccountInfo() const {
  cout << "Savings Account Information" << endl;
  Account::displayAccountInfo();
  cout << "Interest Rate: " << interestRate << "% \n" << endl;
}

void SavingsAccount::addInterest() {
  double interestAmount = balance * (interestRate / 100);
  balance += interestAmount;
}
