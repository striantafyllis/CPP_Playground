// FILENAME:   hello_1.cpp
// PROGRAMMER: Bob Adams
// DATE:       10/27/2004
// COMPILER:   MS Visual C++ 2008 Express Edition
// REQUIRED:   hello_1.cpp
// PURPOSE:
//    Illustrate the basic form of a C++ program.
//    Illustrate the use of // which means what follows is a comment.
//    Illustrate the use of << which is used to output stuff.

#include <iostream>         // Allows use of << and >> operators.
using namespace std;        // Eliminates need for std as in std::cout

int main( void )
{
    cout  << "Hello World! " << endl;

//    system("pause");   // required by some compilers to keep output window open.
    return 0;
}