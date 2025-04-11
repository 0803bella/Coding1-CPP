#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum enemyType {GRUNT, MINIBOSS, BOSS};

// POD structures
// a custom variable type
// these data members are public by default

struct enemy {
    int health;
    int damage;
    string name;
    enemyType type;
};

struct address {
    string streetName;
    int streetNumber;
    string city;
    string stateCode;
    int zipCode;
};

struct employee {
    int Id;
    string name;
    int age;
    address addr;       //structs can hold other structs
    float wage;
};

string AddressOneLine(address addr) {
    string oneLine = "";
    oneLine += to_string(addr.streetNumber);
    oneLine += " " + addr.streetName;
    oneLine += ", " + addr.city;
    oneLine += ", " + addr.stateCode;
    oneLine += ", " + to_string(addr.zipCode);

    return oneLine;
}

int main() {
    cout << "Structures!\n";
    enemy boy;
    boy.health = 10;
    boy.damage = 4;
    boy.name = "Mama's Boy";
    boy.type = GRUNT;

    cout << "A " << boy.name << " approaches! His health is " << boy.health << ".\n";

    enemy alpha;
    alpha.health = 15;
    alpha.damage = 6;
    alpha.name = "Alpha Male";
    alpha.type = MINIBOSS;

    cout << "A " << alpha.name << " appears and attacks " << boy.name << "!\n";
    boy.health -= alpha.damage;

    if(boy.health < 1) {
        cout << boy.name << " has been killed!\n";
    }
    else {
        cout << boy.name << " has " << boy.health << " health left!\n";
    }

    vector<enemy> enemies;

    enemies.push_back(boy);
    enemies.push_back(alpha);

    cout << "Status of all enemies:\n";
    for(int i = 0; i < enemies.size(); i++) {
        cout << enemies[i].name << " has " << enemies[i].health << " health.\n";
        cout << "Their damage is " << enemies[i].damage << " and their type is\n";
        switch (enemies[i].type)
        {
        case GRUNT:
            cout << "grunt\n";
            break;
        case MINIBOSS:
            cout << "mini-boss\n";
            break;
        case BOSS:
            cout << "boss\n";
            break;
        default:
            cout << "unknown\n";
            break;
        }
        cout << ".\n";
    }

    employee bella;
    bella.Id = 8108;
    bella.name = "Bella Alderman";
    bella.age = 20;
    bella.wage = 15;
    bella.addr.streetNumber = 1234;
    bella.addr.streetName = "Main Street";
    bella.addr.city = "Wichita";
    bella.addr.stateCode = "KS";
    bella.addr.zipCode = 12345;

    cout << bella.name << " lives at " << AddressOneLine(bella.addr) << ".\n";

    return 0;
}