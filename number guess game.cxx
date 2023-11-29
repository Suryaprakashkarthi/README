#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Declare variables
    int secretnumber, guess_num, flag = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secretnumber = rand() % 100 + 1;

    // Main game loop
    do {
        // Ask the user to guess the number
        cout << "\n\n\t\tGuess a number between 1 to 100: ";
        cin >> guess_num;

        // Check if the guess is correct
        if (secretnumber == guess_num) {
            cout << "\n\n\t\tYour guess was right!!\n\n";
            flag = 1; // Set flag to exit the loop
        } else if (secretnumber < guess_num) {
            cout << "\n\n\t\tYour guess is too high\n\n";
        } else {
            cout << "\n\n\t\tYour guess is too low\n\n";
        }

    } while (flag == 0);

    return 0;

}