#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account = Account("Jonathan Steele", 1000);
    account.makeWithdrawl(500);
    cout << account.getBalance() << endl;
    account.makeDeposit(100);
    cout << account.getBalance() << endl;
}