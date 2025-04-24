#include <iostream>
#include <string>
using namespace std;

bool debug = true;

class human {
protected:
    string name;
    int health;
    int damage;

public:
    human(string givenName, int givenHealth = 10, int givenDamage = 4) {
        name = givenName;
        health = givenHealth;
        damage = givenDamage;
    }

    human() {}

    void SayHello() {
        cout << "My name is " << name << "!\n";
        cout << "Health: " << health << "\n";
    }

    virtual void SetHealth(int byAmount) {
         if (debug) {
            cout << "at the top of SetHealth(byAmount), health = " << health << ", byAmount = " << byAmount << ".\n";
        }

        if (health < 0) health = 0;
        if (health > 100) health = 100;

        health += byAmount;

        if (health < 0) health = 0;
        if (health > 100) health = 100;
    }

    void SetDamage(int givenDamage) {
        damage = givenDamage;
    }

    void SetName(string givenName) {
        name = givenName;
    }

    string GetName() {
        return name;
    }

    int GetHealth() {
        return health;
    }

    int GetDamage() {
        return damage;
    }
};

class barbarian : public human {
    public:

    barbarian(string givenName, int givenHealth = 10, int givenDamage = 4) {
        SetName(givenName);
        SetHealth(givenHealth);
        SetDamage(givenDamage);
    }

    void Yell() {
        cout << "The Barbaian yells, boosting all of his team's stats.\n";
    }

    void doubleSwing(human& target) {
        cout << "The Barbaian swings both weapons at " << target.GetName() << "!\n";
        int tempDamage = this->GetDamage() * 2;
        target.SetHealth(-tempDamage);
    }
};

class shopkeep : public human {
private:
    int gold;
    string shopName;
public:
    shopkeep() {
        gold = 15;
    }

    void SetShopName(string givenShopName) {
        shopName = givenShopName;
    }

    string GetShopName() { return shopName; }

    void SetHealth(int byAmount) override {
        if (health < 0) health = 0;
        if (health > 100) health = 100;

        health += byAmount;

        if (health <= 0) {
            cout << "The proprietor of " << shopName << " has died!\n";
            cout << "They dropped " << gold << " gold.\n";
            gold = 0;
        }
    }
};

int main() {
    barbarian bane("Bane", 22, 4);
    bane.SayHello();

    human character("Bella");
    character.SayHello();
    cout << "Damage: " << character.GetDamage() << endl;

    character.SetHealth(15);
    cout << "setting health\n";
    character.SetDamage(6);
    cout << "setting damage\n";

    cout << "Updated Health: " << character.GetHealth() << endl;
    cout << "Updated Damage: " << character.GetDamage() << endl;

    bane.doubleSwing(character);
    character.SayHello();

    shopkeep papaJohn;
    papaJohn.SetName("Papa John");
    papaJohn.SetShopName("Papa John's Pizza Tavern");
    papaJohn.SetHealth(5);

    bane.doubleSwing(papaJohn);

    papaJohn.SayHello();

    return 0;
}