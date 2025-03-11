// Bella Alderman
// Week 8 Recap

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    srand(time(0));
    bool debug = true;

    // ask the player if they prefer cheese or pepperoni pizza
    cout << "Hello! Quick question, do you prefer cheese or pepperoni pizza?\n";
    string input = "";
    getline(cin, input);
   
    // use an if, and else if, and else to check their input
    // have the computer agree or disagree with their choice, or berate them for any other option
    if (input == "cheese") {
        cout << "Cheese is my favorite too!\n";
    }
    else if (input == "pepperoni") {
        cout << "Pepperoni is okay... I guess...\n";
    }
    else {
        cout << "Hey! That wasn't an option!\n";
    }

    // build a guess the number game
    // have the computer choose a random number between 1 and 10 (inclusive)
    // start a while loop
    // ask the player to guess the number
        // int theNumber = rand()...    
    // getline(cin, input)
    // if(stoi(input) == theNumber)...
    // if they said "quit" break out of the loop
    // if the number is correct, tell the player, and end the loop
    // if the number is too high, have the computer say "lower"
    // if the number is too low, have the computer say "higher"
    //don't forget
        // #include <cstdlib>
        // #include <ctime>
        // in main (), srand(time(0))
    // second part - add a debug mode that will tell the player what the number is
    // in main(), bool debug = true;
    // in loop, if(debug) cout << "the number is" << theNumber << ".\n"

    int theNumber = rand() % 10 +1;
    cout << "Anyways, try and guess what number I'm thinking of between 1 and 10!\n";

    while (true) {
        getline(cin, input);
        int playerGuess = 0;

        try { playerGuess = stoi(input); }
        catch (invalid_argument) { cout << "That's not a number, please try again.\n"; }

        if (input == "quit") {
            cout << "Oh, okay, bye... :(\n";
            break;
        }

        if (stoi(input) == theNumber) {
            cout << "Yay! You guessed my number!\n";
            break;
        }

        if(stoi(input) > theNumber) {
            cout << "It's lower than that!\n";
        }

        else {
            cout << "It's higher than that!\n";
        }
    }
    return 0;
}