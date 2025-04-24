#pragma once        // only complies this stuff once
#include <string>
#include <iostream> 
#include <fstream>
using namespace std;


void ReadFromFile();

void WriteToFile();

void WriteArrayToFile(string* arr, int size);

int ReadFileIntoArray(string arr[], int maxSize);