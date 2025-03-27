#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    story();
    while (health > 0) {
        if (askYN("Do you want to adventure?")) {
            adventure()
        }
        else {
            break;
        }
    }
    ending();
}

bool adventure() {
    if (askYN()) {
        // do the adventure
    }
    else {
        return false;
    }
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