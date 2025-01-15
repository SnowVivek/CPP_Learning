#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber(){
    srand(time(0)); // Seed for randome number generator
    return rand() % 100 + 1; // Random number between 1 to 100
}

void playGuessingGame(){
    int randomNumber = generateRandomNumber();
    int guess;

    cout << "I have chosen a number between 1 to 100. Can you guess it?\n";

    // Loop until the player guesses the correct number 
    do {
        cout << "Enter you guess: ";
        cin >> guess;

        if (guess > randomNumber){
            cout << "Too high! Try again. \n";
        }else if (guess < randomNumber){
            cout << "Too low! Try again. \n";
        }else {
            cout << "Congratulations! You guessed the number. \n";
        }
    }while (guess != randomNumber);
}

int main (){
    playGuessingGame();
    return 0;
}