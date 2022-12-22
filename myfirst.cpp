//
// Created by Spyros Triantafyllis on 12/21/22.
//

// myfirst.cpp -- displays a message
#include <iostream>                           // a PREPROCESSOR directive

int main()                                    // function header
{                                             // start of function body
    using namespace std;                      // make definitions visible
    cout << "Come up and C++ me some time.";  // message
    cout << endl;                             // start a new line
    cout << "You won't regret it!" << endl;   // more output

    cout << endl;

    cout << "short is " << sizeof(short) << " bytes" << endl;
    cout << "int is " << sizeof(int) << " bytes" << endl;
    cout << "long is " << sizeof(long) << " bytes" << endl;
    cout << "long long is " << sizeof(long long) << " bytes" << endl;

    cout << endl;

    cout << "float is " << sizeof(float) << " bytes" << endl;
    cout << "double is " << sizeof(double) << " bytes" << endl;

    return 0;                                 // terminate main()
}
