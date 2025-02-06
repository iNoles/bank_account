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
