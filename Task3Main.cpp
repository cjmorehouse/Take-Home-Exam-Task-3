
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"
using namespace std;

void playGame() {
    srand(time(0));
    Die die;
    int userTotal = 0, computerTotal = 0;

    computerTotal = die.roll() + die.roll();

    char choice;
    do {
        cout << "Your current total: " << userTotal << endl;
        cout << "Roll the dice? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            int roll = die.roll() + die.roll();
            cout << "You rolled: " << roll << endl;
            userTotal += roll;

            if (userTotal > 21) {
                cout << "You went over 21! You lose." << endl;
                return;
            }
        }
    } while (choice == 'y' || choice == 'Y');

    cout << "Computer's total: " << computerTotal << endl;
    cout << "Your total: " << userTotal << endl;

    if (computerTotal > 21 || userTotal > computerTotal) {
        cout << "You win!" << endl;
    } else if (userTotal == computerTotal) {
        cout << "It's a tie!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

int main() {
    playGame();
    return 0;
}
