#include <iostream>
#include <string>
using namespace std;

class robot {
private:
    string name;
    string phrase;
    int charge;
    int maxCharge;
    int minCharge;

public:
    robot(string name, string phrase, int charge = 10, int maxCharge = 100, int minCharge = 0);
    robot();
    void sayHello();

    // setters and getters give access to private varibles through test we write
    // setCharge clamps charge to a range of 0-100
    // setters will alwasy have an input parameter 
    void setCharge(int givenCharge) {
        if(givenCharge < 0) {
            charge = 0;
        }
        else if (givenCharge > 100) {
            charge = 100;
        }
        else {
            charge = givenCharge;
        }
    }
    void changeCharge(int by = -1) {
        charge += by;
        setCharge(charge);              // for clamping charge
    }
    // getters will always have a return type
    int getCharge() {
        return charge;
    }
    void setName(string givenName) {
        if(givenName.size() < 3) {
            cout << "Name is too short!\n";
            return;
        }
        else if (givenName.size() > 20) {
            cout << "Name is too long!\n";
            return;
        }
        else {
            name = givenName;
        }
    }
    string getName() {
        return name;
    }
};

robot::robot(string givenName, string givenPhrase, int givenCharge, int maxC, int minC)
    : name(givenName), phrase(givenPhrase), charge(givenCharge), maxCharge(maxC), minCharge(minC) {
    cout << "A new robot has been constructed!\n";
}

robot::robot() : name("DefaultBot"), phrase("Hello!"), charge(10), maxCharge(100), minCharge(0) {
    cout << "Using the DEFAULT constructor.\n";
}

void robot::sayHello() {
    cout << "My name is " << name << " and my charge is " <<  charge << ".\n";
    cout << phrase << "\n";
    changeCharge();
}

int main() {
    robot robo;
    robo.setName("Chibi Robo");
    robo.setCharge(5);

    cout << "Look at my new robot! His name is " << robo.getName() << ".\n";
    cout << "He is charging right now. His battery is at " << robo.getCharge() << ".\n";

    robo.changeCharge(50);
    cout << "Two hours later... " << robo.getName() << "'s battery is now " << robo.getCharge() << ".\n";

    robot rob("ROB", "Beep Boop", 25);
    cout << "Here's my other robot! He can introduce himself, watch!\n";
    rob.changeCharge(-200);
    rob.sayHello();

    return 0;
}