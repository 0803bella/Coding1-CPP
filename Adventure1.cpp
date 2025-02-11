#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    bool debug = true;

//welcome the player
    cout << "Welcome to Battle Sim!\n";

//set up the game
//int health = 10, attack, block, turns = 0
    int playerHealth = 10;
    cout << "Player's health = " << playerHealth << ".\n";

//seed the random number generator
//start the loop
    bool playerIsAlive = true;
    int turns = 0;

//add 1 to turns
    while (playerHealth > 0 && turns < 4) {
        string input;
        turns += 1;
        if (debug) cout << "Turn: " << turns << "\n";
        cin >> input;

//start the encounter
//randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
//        if block is greater or equal to attack, successful block
//        otherwise, subtract attack value from health.

    int attack = rand() % 5;
    int block = rand() % 5;

    if (block >= attack) {
        cout << "Succesful block!\n";
    }
    else {
        playerHealth -= attack;
        cout << "You were hit!\n";
        cout << "Your health is now: " << playerHealth << ".\n";
    }

    if (playerHealth < 0) {
        cout << "You died!\n";
    }
//        ask the player if they would like to keep adventuring. if they don't, break out of the loop.
    cout << "Would you like to keep adventuring?\n Type 'yes' to contuine: ";

    cin >> input;

    if (input != "yes") {
        break;
        cout << "Going home now!\n";
    }

//keep looping while health is greater than zero and fewer than 4 turns have happened
    }

//if health is greater than 0, congratulate player
    if (playerHealth > 0) {
        cout << "Congrats! You survived!\n";
    }

//otherwise, tell the player they're dead.
    if (playerHealth < 0) {
        cout << "You died!\n";
    }
}