#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
    
   

    char playAgain;

    do {
        int randomNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I've selected a random number between 1 and 100. Try to guess it!" << endl;

        while (true) {
            cout << "Enter your guess: ";
            cin >> guess;

            // Check if the guess is valid
            if (guess < 1 || guess > 100) {
                cout << "Please enter a valid number between 1 and 100." << endl;
                continue;
            }

            attempts++;

            if (guess == randomNumber) {
                cout << "Congratulations! You guessed the correct number." << endl;
                cout << "It took you " << attempts << " attempts." << endl;
                break;  // Exit the loop when the guess is correct
            } else if (guess < randomNumber) {
                cout << "Too low. Try again." << endl;
            } else {
                cout << "Too high. Try again." << endl;
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
