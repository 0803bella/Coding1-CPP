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
    string input = "";
    int randomNumber = (rand() % 5);

//start the loop
    bool playerIsAlive = true;
    int turns = 0;

//add 1 to turns
    while (playerIsAlive) {
        string input;
        turns += 1;
        if (debug) cout << "Turn: " << turns << "\n";
        cin >> input;
   }

//start the encounter
//randomly generate numbers for attack (range = 0-4) and block (range = 0-4)

    cout << "Would you like to attack the enemy or block its attack?\n";
    cin >> input;

    if (input == "attack"){
        cout << "You attacked the enemy!\n";
        cout << "Attack landed " << randomNumber << " hit points!\n";
        cin >> input;
    }
    if (input == "block"){
        cout << "You blocked the enemy's attack!\n";
        cout << "You blocked " << randomNumber << " hit points!\n";
        cin >> input;
    }
    else {
        cout << "That is not an option!\n";
    }
//        if block is greater or equal to attack, successful block
//        otherwise, subtract attack value from health.
//        ask the player if they would like to keep adventuring. if they don't, break out of the loop.
//keep looping while health is greater than zero and fewer than 4 turns have happened
//if health is greater than 0, congratulate player
//otherwise, tell the player they're dead.
}