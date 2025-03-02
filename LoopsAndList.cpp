// Bella Alderman Coding 1 Week 6 Spring 25, Feb 25th, 2025
// Loops and List

#include <iostream>
#include <string>

using namespace std;

int main () {
    // we are going to build an array
    // an array is an ordered list of a single type of variable

    // create an array of integeres with a [size of 10]

    const int MAX_SIZE = 10;                    // This variable cannot be changed after this line
                                                // we use ALL_CAPS for constant variable names

    int element = 0;                            // this keeps track of where in the array we are

    int scores[MAX_SIZE];                       // This array has just created 10 spots for intergers

    // add a value to the first element in the array
    scores[0] = 9001;

    // display the value to confirm that it works
    cout << "The highest score in scores is " << scores[0] << ".\n";

    // add 3 more scores using element++ to keep track of where you are in the list

    element = 1;                                // point at the second element in the list
    scores[element++] = 682;                    // the postfix increment operator adds 1 AFTER the line runs
    scores[element++] = 604;
    scores[element++] = 412;
    scores[element++] = -12;
    scores[element++] = 30;

    cout << "The second score is " << scores[1] << ".\n";

    // print all the scores
        // use a while loop to run through all the scores
        // the loop is done when the loop counter is equal to element
    
    int counter = 0;
    while (counter < element) {                 // while counter is less than element, keep looping
        if (scores[counter] < 0) {
            counter += 1;
            continue;                           // stop the code here, go to the next loop
        }

        cout << scores[counter] << ".\n";
        counter += 1;                           // add 1 to the counter every loop, so it points at the next thing
    }

    // create an array of strings named bestFriends
    // use a while loop to ask the user to add names, or quit
    // at the end, we will use a loop to display all of the names

    // create an array of string variables, you MUST specify a size, we'll pick 20
    string bestFriends[20];
    int friendCount = 0;

    string input;

    do {
        cout << "We're making a list of best friends, who would you like to add?\n";
        cout << "Or type 'quit' to quit.\n";
        getline(cin, input);                    // get input from the player

        // add your fail case first
        if(input == "quit") {                   // if they types 'quit', stop the loop
            cout << "Thanks for adding names to the list!\n";
            break;
        }

        if(friendCount >= 10) {                 // if they filled up the list, stop the loop
            cout << "Oh no, that's all the freinds that we can have.\n";
            break;
        }

        // then add your functionality
        bestFriends[friendCount++] = input;     // add what the player typed to the array
                                                // then add 1 to friendCount

    } while (true);

    // a loop runs "for a certain amount of times"
    // a for loop includes the counter, the test, and the increment action
        // all on the same line

    // standard for loop looks like this:
    // for(setup; test; action) {code}
    for (int i = 0; i < friendCount; i++) {      // for as long as i (starting at 0) is
        if (bestFriends[i] == "") {
            continue;
        }
        cout << i + 1 << ".\t";                     // add "1. "
        cout << bestFriends[i] << "\n";             // less than friendCount 
                                                    // add 1 to i, and keep looping
    }
}