#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public: 
    BankAccount(string accNumber, double initialBalance)
    {
        accountNumber = accNumber;
        balance  = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited Money: " << amount << endl; 
            cout << "New Balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid Deposit Amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn Money: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance. " << endl;
        }
        else{
            cout << "Invalid Withdrawal Amount. " << endl;
        }

    }

    double getBalance() const
    {
        return balance;
    }

    string getAccountNumber() const
    {
        return accountNumber;
    }
};

int main()
{
    string accNumber;
    double initialBalance;
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account(accNumber, initialBalance);
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Initial Balance: " << account.getBalance() << endl;

    double depositAmount;
    cout << "Enter Amount To Deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    double withdrawAmount;
    cout << "Enter Amount To Withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "Final Balance:  " << account.getBalance() << endl;

    return 0;
}