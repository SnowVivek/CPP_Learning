#include <iostream>
#include <string>
#include <limits> // For input validation

using namespace std;

class BankAccount {
private:
    string accountHolder; // Name of the account holder
    double balance; // Account balance
    
public:
     // Constructor to init the account
    BankAccount(string name, double initialDeposit){
        accountHolder = name;
        balance = initialDeposit;
        }
    
    void displayAccountDetail(){
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }

    void deposit(double amount){
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount){
        if (amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amout or insufficient balance!" << endl;
        }
    }

    double getBalance(){
        return balance;
    }
};

int main(){
    string name;
    double initialDeposit;
    cout << "Enter your name: ";
    cin.ignore();
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

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Enter amout to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            }
            case 3: {
                account.displayAccountDetail();
                break;
            }
            case 4: {
                cout << "Thank you for using the Bank Account System, Goodbye!" << endl;
                break;
            }
            default:
                cout << "Invalid choice! Please try again." << endl;
    
        }
    }while (choice !=4);

    return 0;
}