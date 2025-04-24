#include "filemgmt.h"

void ReadFromFile() {
    // this string will hold what the file contains
    string fileContents;

    // open the file
    ifstream file("file.txt");

    // for each line in the file, add it to the string
    while (getline(file, fileContents)) {
        cout << fileContents << "\n";
    }

    // close the file so that the othe programs can use it
    file.close();
}

void WriteToFile() {
    // opening the "file.txt" file. if it doesnt exist, create it
    ofstream file("file.txt");

    // write a line to the file
    //file << "Play Ocarina of Time!\n";

    file.close();
}

void WriteArrayToFile(string* arr, int size) {
    ofstream file("favs.txt");

    if (!file.is_open()) {
        return;
    }

    for (int i = 0; i < size; i++) {
        file << arr[i] << "\n";
    }

    file.close();
}

int ReadFileIntoArray(string arr[], int maxSize) {
    ifstream file("file.txt");

    if (!file.is_open()) {
        return 0;
    }

    string line;
    int count = 0;

    while (getline(file, line) && count < maxSize) {
        arr[count] = line;
        count++;
    }

    file.close();
    return count;
}