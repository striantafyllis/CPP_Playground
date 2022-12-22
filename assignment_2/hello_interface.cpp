// FILENAME: hello_interface.h
// PROGRAMMER: Spyros Triantafyllis
// DATE: 12/21/2022
// COMPILER: CLion
// REQUIRED:
// PURPOSE: Assignment 2

#include <iostream>
#include "hello_interface.h"

string read_name() {
    cout << "What's your name?" << endl;
    string name;
    cin >> name;
    return name;
}

void print_greeting(string name) {
    cout << "Hello " << name << "!" << endl;
}
