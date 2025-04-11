/*
Create a human class with the following:

string Name
int Health = 10
int Damage = 4
a Constructor with parameters for name, health, baseDamage
void SayHello()
void SetHealth(int byAmount)
void SetDamage(int givenDamage)
int GetHealth()
int GetDamage()
*/

#include <iostream>
#include <string>
using namespace std;

class human {
private:
    string n;
    int h;
    int d;

public:
    human(string name, int health = 10, int damage = 4) {
        n = name;
        h = health;
        d = damage;
    }

    void SayHello() {
        cout << "Hi there! My name is " << n << "!\n";
    }

    void SetHealth(int byAmount) {
        h = byAmount;
    }

    void SetDamage(int givenDamage) {
        d = givenDamage;
    }

    int GetHealth() {
        return h;
    }

    int GetDamage() {
        return d;
    }
};

int main() {
    human character("Bella");
    character.SayHello();
    cout << "Health: " << character.GetHealth() << "\n";
    cout << "Damage: " << character.GetDamage() << "\n";

    return 0;
}