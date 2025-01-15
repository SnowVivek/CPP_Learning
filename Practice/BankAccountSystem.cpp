#include <iostream>
#include <string>
#include <limits> // For input validation

using namespace std;

class BankAccount {
private:
    string accountHolder; // Name of the account holder
    double balance;       // Account balance

public:
    // Constructor to initialize the account
    BankAccount(string name, double initialDeposit) {
        accountHolder = name;
        balance = initialDeposit;
    }

    void displayAccountDetail() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    string name;
    double initialDeposit;

    // Get account holder name
    cout << "Enter your name: ";
    getline(cin, name);

    // Get the initial deposit
    while (true) {
        cout << "Initial deposit: ";
        cin >> initialDeposit;

        if (cin.fail() || initialDeposit < 0) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid deposit amount! Please enter a positive number." << endl;
        } else {
            break; // Valid input
        }
    }

    BankAccount account(name, initialDeposit);

    int choice;
    do {
        cout << "\n--- Bank Account Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Display Account Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number between 1 and 4." << endl;
            continue;
        }

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid amount! Please enter a valid number." << endl;
                } else {
                    account.deposit(amount);
                }
                break;
            }
            case 2: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid amount! Please enter a valid number." << endl;
                } else {
                    account.withdraw(amount);
                }
                break;
            }
            case 3:
                account.displayAccountDetail();
                break;
            case 4:
                cout << "Thank you for using the Bank Account System. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}
