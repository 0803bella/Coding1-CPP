#include <iostream>
#include "filemgmt.h"
#include "Item.h"
using namespace std;

int main() {

    ReadFromFile();
    WriteToFile();

Item itemArray[5] = {
        Item("Sword"),
        Item("Shield"),
        Item("Bow"),
        Item("Arrows"),
        Item("Potion")
    };

    for (int i = 0; i < 5; i++) {
        itemArray[i].examine();
    }

    /*
    // Get favorite items from the user
    string favs[100];
    int nextIndex = 0;

    cout << "Type out your favorites, or type 'done' to stop:\n";
    while (true) {
        string input;
        getline(cin, input);

        if (input == "done") {
            break;
        }

        favs[nextIndex] = input;
        nextIndex++;
    }

    WriteArrayToFile(favs, nextIndex);

    Item itemArray[5];

    for (int i = 0; i < 5 && i < nextIndex; i++) {
        itemArray[i] = Item(favs[i]);
    }

    cout << "\nHere are your items:\n";
    for (int i = 0; i < 5 && i < nextIndex; i++) {
        itemArray[i].examine();
    }
    */

    return 0;
}