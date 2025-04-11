#include <iostream>
#include <string>
using namespace std;

class robot {
public:             // anyone can see, call, and change this
    // data members
    string name;
    string phrase;
    int charge;

    // member functions
    // function declarations to be defined later, they don't require parameter names
    robot(string, string, int);
    robot();
    void sayHello();

private:            // only I can see, call, and change this
protected:
};

// function definitions must be outside of the class definition 
// constructor has to be named the same as the class and doesn't have a return type
robot::robot(string givenName, string givenPhrase, int givenCharge) {
    // assigns this instance's varibles to the given values
    name = givenName;
    phrase = givenPhrase;
    charge = givenCharge;

    cout << "A new robot has been constructed!\n";
}

// overloading the constructor with the "default constructor"
robot::robot() {
    cout << "Using the DEFAULT constuctor.\n";
}

void robot::sayHello() {
    cout << "My name is " << name << " and my charge is " <<  charge << ".\n";
    cout << phrase << "\n";
}

int main() {
    robot robo;
    robo.name = "Chibi Robo";
    robo.charge = 5;

    cout << "Look at my new robot! His name is " << robo.name << ".\n";
    cout << "He is charging right now. His battery is at " << robo.charge << ".\n";

    robot rob("ROB", "Beep Boop", 25);
    cout << "Here's my other robot! His name is " << rob.name << ".\n";

    cout << "He can introduce himself, watch!\n";
    rob.sayHello();

    return 0;
}