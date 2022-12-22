//
// Created by Spyros Triantafyllis on 12/21/22.
//

#include <iostream>
#include "EnglishWeight.h"

int main() {
    EnglishWeight w1, w2;

    cout << "Enter w1" << endl;
    cin >> w1;
    cout << "Enter w2" << endl;
    cin >> w2;

    cout << "w1 = " << w1 << endl;
    cout << "w2 = " << w2 << endl;
    cout << "w1 + w2 = " << (w1 + w2) << endl;
    cout << "w1 - w2 = " << (w1 - w2) << endl;
    cout << "w1 / w2 = " << (w1 / w2) << endl;
    cout << "w1 * 2 = " << (w1 * 5) << endl;
    cout << "2 * w1 = " << (2 * w1) << endl;
    cout << "w1 / 2 = " << (w1 / 2) << endl;
}