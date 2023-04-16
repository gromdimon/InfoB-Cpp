//
// Created by gromdimon on 15.04.23.
//
#include "iostream"
using namespace std;

int second() {
    int a, b;
    a = 5, b = 7;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    int c = a + b;
    cout << "c = " << c << endl;

    // Calculate perimeter of a rectangle
    double l, d;
    cin >> l >> d;
    double p = 2 * (l + d);
    cout << "Perimeter = " << p << endl;
}
