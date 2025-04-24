#include "Item.h"
#include <iostream>
using namespace std;

Item::Item() {
    cout << "Creating a new item!\n";
    name = "Unknown";
}

Item::Item(string itemName) {
    name = itemName;
}

void Item::examine() {
    cout << "Item: " << name << endl;
}

/*
// in c++ the first enum value is 0, then counts up
enum location { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY };

item::item() {
    cout << "Creating a new item!\n";
    location = MARKET;
}
*/