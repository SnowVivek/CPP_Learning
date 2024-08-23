#include<iostream>
#include<string>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;
    double price;

    };

int main(){
    Car car1;
    cout << "Enter the brand of the car: ";
    getline(cin, car1.brand);
    cout << "Enter the model of the car:";
    getline(cin, car1.model);
    cout << "Enter the year of manufacture: ";
    cin >> car1.year;
    cin.ignore();
    cout << "Enter the car price: ";
    cin >> car1.price;
    cin.ignore();

    cout << car1.brand << "\n";

    return 0;
}