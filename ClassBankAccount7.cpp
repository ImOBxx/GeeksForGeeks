#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accnumber, double initialBalance)
    {
        accountNumber = accnumber;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited Amount: " << amount << endl;
            cout << "Current Balance: " << balance << endl;
        }
        else
        {
            cout << "Invalid Deposit Amount." << endl;
        }
    }

    void withdrawal(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn Amount: " << amount << endl;
            cout << "Current Balance: " << balance << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance." << endl;
        }
        else
        {
            cout << "Invalid Request." << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }

    string getAccountNumber()
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
    cout << "Current Balance: " << account.getBalance() << endl;

    char choice;
    do
    {
        cout << "Enter Account Number: ";
        string enteredAccNumber;
        cin >> enteredAccNumber;
        
        if (enteredAccNumber != accNumber)
        {
            cout << "Invalid Account Number. Try again." << endl;
            continue;
        }
        
        cout << "Enter 'd' for Deposit, 'w' for Withdrawal, or 'n' to exit: ";
        cin >> choice;
        
        if (choice == 'd')
        {
            double deposit;
            cout << "Enter Amount To Be Deposited: ";
            cin >> deposit;
            account.deposit(deposit);
        }
        else if (choice == 'w')
        {
            double withdrawalAmount;
            cout << "Enter Amount To Be Withdrawn: ";
            cin >> withdrawalAmount;
            account.withdrawal(withdrawalAmount);
        }
        else if (choice == 'n')
        {
            cout << "Exiting..." << endl;
        }
        else
        {
            cout << "Invalid Option. Try again." << endl;
        }
        
        cout << "Account Number: " << account.getAccountNumber() << endl;
        cout << "Current Balance: " << account.getBalance() << endl;
        
    } while (choice != 'n');

    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}