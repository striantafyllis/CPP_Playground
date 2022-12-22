// FILENAME:   hello_prompt.cpp
// PROGRAMMER: Spyros Triantafyllis
// DATE:       12/21/2022
// COMPILER:   CLion
// REQUIRED:   hello_prompt.cpp
// PURPOSE:
//    Illustrate the basic form of a C++ program.
//    Illustrate the use of // which means what follows is a comment.
//    Illustrate the use of << which is used to output stuff.

#include <iostream>         // Allows use of << and >> operators.
using namespace std;        // Eliminates need for std as in std::cout

int main( void )
{
    string name;
    cout << "What's your name?" << endl;
    cin >> name;
    cout  << "Hello " << name << "!" << endl;

    return 0;
}