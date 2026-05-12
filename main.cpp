#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Variable to store the chosen number 
    int chosenNumber = 7; 
    // Variable to store user's input 
    int userGuess = 0;
    // Empty list to record all user attempts 
    vector<int> attempts; 

    cout << "--- DSA: Number Guessing Game ---" << endl;

    // While loop runs as long as the guess is not equal to the chosen number 
    while (userGuess != chosenNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess; 

        // Immediately save the value into the list 
        attempts.push_back(userGuess);

        // If / else statements to compare the guess 
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } 
        else {
            cout << "Correct" << endl;
        }
    }

    // After the loop, use a for loop to display all guesses 
    cout << "\nGame Over. Your attempts were:" << endl;
    for (int i = 0; i < attempts.size(); i++) {
        cout << "Attempt " << i + 1 << ": " << attempts[i] << endl;
    }

    return 0;
}
