#include <iostream>
using namespace std;

class BankAccount
{ 
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNumber, double initialBalance){
            accountNumber = accNumber;
            balance = initialBalance;
        }

        void deposit(double amount)
        {
            if (amount > 0)
            {
                cout << "\n";
                balance += amount;
                cout << "Enter Money To Deposit: " << amount << endl;
                cout << "Deposited Money: " << balance << endl;
            }
            else 
            {
                cout << "Invalid Amount." << endl;
            }
        }

        void withdrawal(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                cout << "\n";
                balance -= amount;
                cout << "Enter Money To Be Withdrawn: " << amount << endl;
                cout << "Remaining Balance: " << balance << endl;
            }
            else if (amount > balance)
            {
                cout << "\n";
                cout << "Insufficient Balance." << endl;
                cout << "\n";
            }
            else
            {
                cout << "Invalid Amount." << endl;
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
    cout << "\n";
    string accNumber;
    double initialBalance;
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account(accNumber, initialBalance);

    cout << "\n";
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Initial Balance: " << account.getBalance() << endl;
    cout << "\n";

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
        cout << "\n";
        cout << "Enter 'd' for Deposit, 'w' for Withdrawal, 'c' to check balance, or 'n' to exit: ";
        cin >> choice;
        cout << "\n";

        if (choice == 'd')
        {
            double depositAmount;
            cout << "Enter Amount To Be Deposited: ";
            cin >> depositAmount;
            account.deposit(depositAmount);
            cout << "\n";
        }
        else if (choice == 'w')
        {
            double withdrawalAmount;
            cout << "\n";
            cout << "Enter Amount To Be Withdrawn: ";
            cin >> withdrawalAmount;
            account.withdrawal(withdrawalAmount);
            cout << "\n";
        }
        else if (choice == 'c')
        {
            double checkBalance;
            cout << "\n";
            cout << "Your Balance: " << account.getBalance() << endl;
            cout << "\n";       
        }
        else if (choice == 'n')
        {
            cout << "Exiting..." << endl;
        }
        else
        {
            cout << "Invalid Option. Try again." << endl;
        }

        cout << "\n";
        cout << "Account Number: " << account.getAccountNumber() << endl;
        cout << "Current Balance: " << account.getBalance() << endl;
        cout << "\n";

    } while (choice != 'n');

    cout << "Final Balance: " << account.getBalance() << endl;
    cout << "\n";

    return 0;
}
