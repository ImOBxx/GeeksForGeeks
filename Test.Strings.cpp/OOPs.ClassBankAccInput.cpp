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
    // Get account number and initial balance from user
    string accNumber;
    double initialBalance;
    cout << "Enter account number: ";
    cin >> accNumber;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Create a new bank account with initial balance
    BankAccount account(accNumber, initialBalance);

    // Display account details
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Initial Balance: $" << account.getBalance() << endl;

    // Perform some transactions
    double depositAmount;
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    double withdrawAmount;
    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Display final balance
    cout << "Final Balance: $" << account.getBalance() << endl;

    return 0;
}
