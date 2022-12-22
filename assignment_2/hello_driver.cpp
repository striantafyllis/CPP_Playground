// FILENAME: hello_interface.h
// PROGRAMMER: Spyros Triantafyllis
// DATE: 12/21/2022
// COMPILER: CLion
// REQUIRED:
// PURPOSE: Assignment 2

#include "hello_interface.h"
#include <string>

using namespace std;

int main() {
    string name = read_name();
    print_greeting(name);
    return 0;
}