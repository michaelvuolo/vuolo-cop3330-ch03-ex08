/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Vuolo
 */

#include <iostream>
using namespace std;

int main() {
    // init number variable
    int number;

    // read number from user
    cout << "Enter a number: ";
    cin >> number;

    // determine if even or odd
    if (number % 2 == 1)
        cout << "The value " << number << " is an odd number.";
    else
        cout << "The value " << number << " is an even number.";

    return 0;
}