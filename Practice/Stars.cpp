#include <iostream>
using namespace std;

void printBox(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "*";  // Print star for each column
        }
        cout << endl;  // Move to the next line after each row
    }
}

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    printBox(rows, cols);

    cout << "Press Enter to exit...";
    cin.get();  // Wait for user input
    
    return 0;
}
