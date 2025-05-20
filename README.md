# Bank Account Management System

This C++ Bank Account Management System is a simple console-based application that simulates a basic banking system. It allows users to perform fundamental banking operations, such as depositing, withdrawing funds, and checking the account balance. The project focuses on essential functionalities typically found in checking and savings accounts.

## Features

- **Deposit:** Add funds to the account.
- **Withdrawal:** Withdraw funds from the account.
- **Balance Inquiry:** Check the current balance of the account.

## Dependencies

This project has no external dependencies and is built purely with standard C++ libraries. It is a standalone C++ application with a C++11 extension that requires only a compatible compiler.

## How to Build

To build the project, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/iNoles/bank_account.git
   ```
2. Navigate to the project directory:
   ```bash
   cd bank_account
   ```
3. Compile the source code:
     ```bash
     g++ -std=c++17 -o bank_account Account.cpp Savings.cpp Checking.cpp main.cpp
     ```
## How to Run
After building the project, run the executable:
```bash
./bank_account
```
## Sample Output

Checking Account Information
Account Holder: Alice Johnson
Balance: $1000
Overdraft Limit: $500

After Withdrawal: $500
Transaction History for Alice Johnson:
- Withdrew: $500.000000

After Deposit: $600

Transaction History for Alice Johnson:
- Withdrew: $500.000000
- Deposited: $100.000000

Checking Account Information
Account Holder: Alice Johnson
Balance: $600
Overdraft Limit: $500

Savings Account Information
Account Holder: Bob Smith
Balance: $2000
Interest Rate: 3.50%

After Deposit: $2500.00

Transaction History for Bob Smith:
- Deposited: $500.000000

After Interest: $2587.50

Savings Account Information
Account Holder: Bob Smith
Balance: $2587.50
Interest Rate: 3.50%

Transaction History for Bob Smith:
- Deposited: $500.000000
- Interest Added: $87.500000
