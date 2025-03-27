// ceate an array with three names
// use a loop to display all of the names
// complie and run this program to finish

#include <iostream>
#include <string>
using namespace std;

// global varibales go at the top, so that all the functions can use them
int currentShirtSizeElement = 0;
string student = "Bella";

// declaring and defining a new function
// the function must be delcared before it is used
// the function can be defined later in the code
// this function returns nothing
// this function's name is "sayHello()"
void sayHello() {
    cout << "Hello!\n";
}
void sayGoodbye(){
    cout << "Goodbye!\n";
}

//adding two numbers with (parameters)
// parameters go inside the parenthesis
// they are the inputs for our function
// optionally, we can add default values for our input parameters
// we are creating two variables in the input parameter (parenthesis)
void add(int number1 = 2, int number2 = 2) {
    cout << "The sum of " << number1 << " and " << number2 << " is ";
    cout << number1 +number2 << endl;
}

// overload the add function
// this one adds two floats!
// don't forget to call this function in main()
void add(float firstNum, float secondNum) {
    cout << firstNum << " plus " << secondNum << " equals ";
    cout << firstNum + secondNum << endl;
}

void add(string firstWord, string secondWord) {
    cout << firstWord << " plus " << secondWord << " equals ";
    cout << firstWord + secondWord << endl;
}

// return types - the output of the function 
bool askYN(string question = "y/n") {
    do {
        cout << question << " (y/n)" << endl;
        string input;
        getline(cin,input);

        if (input == "y") {
            return true;
        }
        else if (input == "n") {
            return false;
        }
        else {
            cout << "Please type 'y' or 'n'\n";
        }
    } while (true);
}

// show array elements function doesn't return anything
// accepts one parameter as a pointer
void show(string* array, int arraySize) {
    cout << "Here are the contents of your array:\n";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << endl;
    }
}

// create a function that accepts a pointer to an array of strings
// let it add another element, as long as there are apaces
void addShirtSize(string* array) {
    string input;
    while(true) {
        if (currentShirtSizeElement > 9) {
            cout << "That is all the shirt sizes we can support.\n";
            break;
        }
        cout << "Please add a shirt size to the array.\n";
        cout << "Or type 'done' to quit.\n";
        getline(cin, input);

        if (input == "done") {
            break;
        }

    array[currentShirtSizeElement++] = input;
    }
}

// add a while loop to addShirtSize() that let's the user add sizes
    // untill they say done or they fill up the array

int main() {

    string playerName = "Bella";

    // calling the sayHello() function
    sayHello();

    string names[3];
    names[0] = "Bella";
    names[1] = "Chloe";
    names[2] = "Kaylee";

    show(names, 3);

    int counter = 0;

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }

    add();
    add(23, 2);
    add(22.2f, 23.5f);
    add("coffee", "coffee");

    if (askYN("Do you like pizza?")) {
        cout << "Let's get some pizza for lunch!\n";
    }
    else {
        cout << "Okay, we can get sushi instead!\n";
    }

    string shirtSizes[10];
    int currentSize = 0;
    addShirtSize(shirtSizes);
    show(shirtSizes, currentShirtSizeElement);

    sayGoodbye();
}