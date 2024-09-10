#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNumber, double initialBalance)
    {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << ". New balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew: $" << amount << ". New balance: $" << balance << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Function to get the account balance
    double getBalance() const
    {
        return balance;
    }

    // Function to get the account number
    string getAccountNumber() const
    {
        return accountNumber;
    }
};

int main()
{
    // Create a new bank account with initial balance
    BankAccount account("123456789", 1000.0);

    // Display account details
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Initial Balance: $" << account.getBalance() << endl;

    // Perform some transactions
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(1500.0);

    // Display final balance
    cout << "Final Balance: $" << account.getBalance() << endl;

    return 0;
}
