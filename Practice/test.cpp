#include <iostream>
#include <vector>
using namespace std;

class fruit {
private:
    string nameOfFruit;
    int quantity;

public:
    fruit(string name, int initialDeposit) {
        nameOfFruit = name;
        quantity = initialDeposit;
    }

    string getName() const {
        return nameOfFruit;
    }

    void displayFruitBasket() const {
        cout << "\n--- FruitBasket ---\n";
        cout << "Name of fruit: " << nameOfFruit << endl;
        cout << "Quantity: " << quantity << endl;
    }

    void deposit(int amount) {
        if (amount > 0) {
            quantity += amount;
            cout << "Deposited: " << amount << " to " << nameOfFruit << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
};

class FruitBasket {
private:
    vector<fruit> fruits;

public:
    void addFruit(string name, int initialDeposit) {
        fruits.push_back(fruit(name, initialDeposit));
    }

    void deposit(string name, int amount) {
        for (auto& f : fruits) {
            if (f.getName() == name) {
                f.deposit(amount);
                return;
            }
        }
        cout << "Fruit with name " << name << " not found!" << endl;
    }

    void displayAllFruits() {
        for (const auto& f : fruits) {
            f.displayFruitBasket();
        }
    }
};

int main() {
    FruitBasket myBasket;
    int n;

    cout << "Enter number of fruits: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name;
        int initialDeposit;

        cout << "Enter the name of fruit " << i + 1 << ": ";
        cin >> name;
        cout << "Enter the initial deposit of fruit " << i + 1 << ": ";
        cin >> initialDeposit;

        myBasket.addFruit(name, initialDeposit);
    }

    string fruitName;
    int amount;

    cout << "\nEnter the name of the fruit to deposit to: ";
    cin >> fruitName;
    cout << "Enter the amount to deposit: ";
    cin >> amount;

    myBasket.deposit(fruitName, amount);

    cout << "\nAll Fruits in the Basket:" << endl;
    myBasket.displayAllFruits();

    return 0;
}
