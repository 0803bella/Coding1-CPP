#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int playerHealth = 10;

bool playerIsAlive = true;
int totalTreasure = 0;
int turns = 0;
int attack = 0;
int block = 0;
int treasure = 0;

bool askYN(string question = "y/n") {
    string input;
    do {
        cout << question << "(y/n)" << endl;
        getline(cin, input);

        if (input == "y") {
            return true;
        }
        else if (input == "n") {
            cout << "You chose to return to the safety of your home.\n";
            return false;
            break;
        }
        else {
            cout << "Please type 'y' or 'n'\n";
        }
    } while (true);
}

int rollDie() {
    srand(time(0));
    attack = rand() % 7;
    block = rand() % 7;
    treasure = rand() % 11;
    return 0;
}

bool adventure() {
        cout << "An enemy stands in front of you! It charges at you attack as you bring your sword up to block.\n";
        rollDie();
        if (block >= attack) {
            cout << "Succesful block!\n";
            cout << "Your health is still: " << playerHealth << ".\n";
            totalTreasure += treasure;
            cout << "You earned " << treasure << " amount of treasure! Now your total amount is " << totalTreasure << "!\n";
        }
        else {
            playerHealth -= attack;
            cout << "You were hit!\n";
            cout << "Your health is now: " << playerHealth << ".\n";
        }

        if (playerHealth < 0) {
            cout << "You died!\n";
        }
        return true;
}

void ending(){
  if (playerHealth > 0) {
    cout << "You return home with " << playerHealth << " health and " << totalTreasure << " treasure.\n";
  }
  else {
    cout << "You lay dead on the ground with " << totalTreasure << " treasures.\n";
  }
}

void story() {
    while (playerHealth > 0) {

        if (askYN("Do you want to adventure?\n")) {
            adventure();
        }
        else {
            break;
        }
    }
    ending();
}

int main() {
    cout << "You stand at the edge of the forest with your sword in hand...\n";

    story();
}

/*Story()
- return type is void

AskYesNo()
- One string argument named "question"
- return type is bool

RollDie()
- one int parameter named "sides" with a default value of 6
- return type is int

Ending()
- return type is void

Adventure()
- return type is void or bool
- calls rollDie() for attack, block, & treasure
- tells the player their health after the encounter

obviously main()
- calls story,
- has a loop for adventure,
- checks for health
- calls ending()

Create the following global variables:
- health
- totalTreasure

The game should run as follows:

The player is told a story prompting them to seek treasure on an adventure.

The player is asked if they would like to go adventuring.

If the player says yes, numbers for an enemy attack, their own block, and an amount of treasure are randomly generated.
if the player's block is higher than the enemy attack, they have successfully blocked and they receive the treasure.
However, if the attack is higher, that number is subtracted from their health and they do not get the treasure.
The player is then told their health and amount of totalTreasure and asked if they would like to adventure again.
They can continue to adventure as long as their health is greater than zero, at which point the ending is run and they are told that they are dead.
If they instead quit before their health is zero, they are told how much health they have and how much treasure they ended up with.
*/