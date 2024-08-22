#include<iostream>
using namespace std;

//sum function
void sum(int a, int b){
    cout<<"Here is your sum: "<<(a + b)<<endl;
}



int main(){
    int a, b; // Declare the variables a and b
    char choice; // Declare a variable to store the user's choice
    bool keepOpen = false; // Flage to detemine if we need to keep the console open

    cout<<"Welcome to my humble Calculator"<<endl;

do{
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    sum(a, b); // Call the function

    cout<<"Would you like to perform another calculation? (y/n): ";
    cin >> choice;

if (choice == 'n' || choice == 'N') {
    keepOpen = true; // Set the flge to true if exiting
    break; // Exit the loop if the user inputs 'n' or 'N'
    }    
    

}while (choice == 'y' || choice =='Y'); // Continue if the user inputs 'y' or 'Y'
    cout << "Thank you for using my humble calculator. Goodbye!" << endl;
 
    if (keepOpen){
    cout << "Press any key to exit..." << endl;
    cin.ignore(); // Ignore any leftover newline character in the input buffer
    cin.get(); // Wait for the user to press a key
    }

    return 0;
}
