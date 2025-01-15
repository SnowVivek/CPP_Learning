#include <iostream>
using namespace std;

class fruit {
private :
    string nameOfFruit; // name of the fruit
    int quantity;  // Quantity of the fruit 

public:
    fruit(string name, int initialDeposit){
        nameOfFruit = name;
        quantity = initialDeposit;
    }

    void displayFruitBasket(){
        cout << "\n--- FruitBasket ---\n";
        cout << "Name of fruit: " << nameOfFruit << endl;
        cout << "Balance: " << quantity << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            quantity += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

};

int main(){
    string name;
    int initialDeposit;

    cout << "Enter the name of the fruit: ";
    cin >> name;
    cout << "Enter the initial deposit of fruit: ";
    cin >> initialDeposit;

    // Create fruit object 
    fruit myfruit(name, initialDeposit);

    

    myfruit.displayFruitBasket(); 

    return 0;
}