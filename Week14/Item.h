#pragma once
#include <iostream>
using namespace std;

class Item
{
private:
    string name;
public:
    Item();
    Item(string itemName);

    void examine();
};

/*
IN CLASS ASSIGNMENT:
1. in a new source file (.cpp) and with a header file (.h)
2. create a new class named item with the following varibles and functions
    a. string name, enum location, item(), use(), examine()

HOMEWORK:
1. create a function win the filemgmt.cpp to read a file into an array
    a. each new line becomes a new element in the array
2. finish the item class
3. in main, create an array of 5 items and display them with a loop
    a. use itemArray[i].examine() to show all of the details of the item
4. upload the folder of files to github
    a. submit a link to the assignment page of the github folder
*/
