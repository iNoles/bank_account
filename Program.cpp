#include <iostream>
#include "Account.h"

int main() {
    Account account = Account("Jonathan Steele", 1000);
    account.makeWithdrawl(500);
    std::cout << account.getBalance() << std::endl;
    account.makeDeposit(100);
    std::cout << account.getBalance() << std::endl;
}