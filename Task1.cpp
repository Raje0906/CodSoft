#include <iostream>
#include <cstdlib>  // For random number generation
#include <ctime>    // For seeding random with time

using namespace std;

int main() {
    // Initializing random seed with current time to ensure randomness on each run
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0; // Variable to store user's guess
    int attemptCount = 0; // Track the number of attempts

    // Greeting message
    cout << "Hello! Let's play a number guessing game." << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    // Start the guessing loop
    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attemptCount++;

        // Provide feedback based on the user's guess
        if (userGuess > randomNumber) {
            cout << "Oops! Your guess is too high." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Oops! Your guess is too low." << endl;
        } else {
            cout << "Great job! You've guessed the correct number." << endl;
            cout << "It took you " << attemptCount << " attempts." << endl;
        }
    }

    // End of the game
    cout << "Thanks for playing! Have a nice day!" << endl;

    return 0;
}
