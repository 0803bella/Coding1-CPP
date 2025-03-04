#include <iostream>
#include <string>

using namespace std;

int main() {
    int gameCount = 0;
    string games[6];
    games[0] = "Resident Evil";
    games[1] = "The Last of Us";
    games[2] = "Uncharted";
    games[3] = "Mario Kart";
    games[4] = "Gravity Rush";

    string input;

    do {
        cout << "Hello! Would you like to show, add, edit, or remove your games? Type 'quit' when you're done\n";
        getline(cin, input);

        if (input == "show") {
            cout << "Here is your list!\n";
            int index = 0;
            while (index < 5) {
                cout << games[index] << "\n";
                index++;
            }
        }
        if (input == "add") {
            cout << "Type the game you wish to add.\n";
            getline(cin, input);

            games[5] = input;
            for (int i = 0; i < 6; i++) {
                cout << games[i] << "\n";
            }
        }
        if (input == "edit") {
            cout << "What game would you like to edit?\n";
            getline(cin, input);

            for (int i = 0; i < 6; i++) {
                if (games[i] == input) {
                    cout << "Found It!\n";
                    cout << "What would you like to change this to?\n";
                    getline(cin, games[i]);
                    break;
                }
            }
            continue;
        }
        if (input == "remove") {
            cout << "What game would you like to remove?\n";
            getline(cin, input);

            for (int i = 0; i < 6; i++) {
                if (games[i] == input) {
                    cout << "Removing " << games[i] << "...\n";
                    for (int j = i; j < 5; j++) {
                        games[j] = games[j + 1];
                }
                games[5] = "";
                cout << "Removed!\n";
                break;
            }
        }
        continue;
    }

        else if (input == "quit") {
            cout << "See you later!\n";
            break;
        }
    } while (true);

    return 0;
}

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Hello!\n";

    const int MAX_GAMES = 10;
    string favGames[MAX_GAMES];
    int addedGameCount = 0;
    int numOffset;
    string input;

    while(true){
        cout << "\nWhat would you like to do?\n";
        cout << "add, edit, remove, show, quit\n>>";
        getline(cin, input);

        if(input == "add") {
            if (addedGameCount >= MAX_GAMES) {
                cout << "I'm so sorry, you're only allowed 5 favorite games.\n";
            }
            else {
                cout << "What game would you like to add?\n";
                getline(cin, input);
                favGames[addeddGameCount++] = input;
                cout << "You have added " <<favGames[addedGameCount - 1] << " to the list.\n";
            }
        }

        else if(input == "edit") {
            cout << "What game would you like to edit?\n";
            getline(cin, input);
            cout << "Looking for game...\n";
            for(int i = 0; i < addedGameCount; i++) {
                cout << "I have found your game! What would you like to change it to?\n";
                string oldName = favGames[i];
                getline(cin, input);
                favGames[i] = input;
                cout << "we changed " << oldName << " to " << favGames[i] << ".\n"
                break;
            }
            if(i + 1 == addedGameCount) {
                cout << "We couldn't find that game, please try again.\n";
            }
        }

        else if(input == "remove") {
            cout << "What game would you like to remove?\n";
            getline(cin, input);
            cout << "Looking for game...\n";
            for(int i = 0; i < addedGameCount; i++) {
                cout << "I have found your game! Removing now...\n";
                favGames[i] = "";
                break;
            }
            if(i + 1 == addedGameCount) {
                cout << "We couldn't find that game, please try again.\n";
            }
        }

        else if(input == "show") {
            cout << "Here are your games:\n\n";
            for(int i = 0; i < addedGameCount; i++) {
                if(favGames[i] == "") {
                numOffset--;
                contuine;
            }
                cout << i + numOffset << ". " << favGames[i] << "\n";
        }
        numOffset = 1;

        if(input == "quit") {
        cout << "Thanks for playing! You added " << addedGameCount << " games to list.\n";
        break;
        }

        else {
            cout << "That is not an option, try again.\n";
        }
    }
}
*/

/*
        pseudocode for FavGames assignment 

        Setup
            int gameCount = 0;
            string games[size];
        start loop

        0. Greet player and ask for input
        1. Add
            ask the player "what name they want to add"
            get input
            add that name to the array and increment
                gameCount
            (optional) tell player what name they've added
        2. Edit
            ask the player what game they want to edit
            get input
            try to find that game in the list
                use for loop to compare input to games[i]
                if we found a match allow players to edit 
                otherwise have players enter a different game
        3. Remove
            ask the player if they want to remove the game
            get input
        4. Show
            show the player the list of games
        5. Quit
            give players the option to quit
            get input
    */