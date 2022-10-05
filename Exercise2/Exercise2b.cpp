/*
    Date: 10/04/2022
    Author: Krushil Amrutiya
    Purpose: Prompts the user for 2 distinct integers 
    and orders them by the relation “less than.”

*/

#include <iostream> // imports the iostream library.
using namespace std; // adds std to every cout and cin.

int main() { // main function gets executed when code is ran.

    int a, b; // initializes variables a and b as integers

    cout << "Enter 2 distinct integers => "; // prompts the user for instructions

    cin >> a; // stores first integer from user inside variable a
    cin >> b; // stores second integer from user inside variable b

    // if statement gets executed if variable b is less than variable a
    if (b < a) {
        // displays the value of b is less than the value of a
        cout << b << " is less than " << a << endl;
    }

    // if statement gets executed if variable a is less than variable b
    if (a < b) {
        // displays the value of a is less than the value of b
        cout << a << " is less than " << b << endl;
    }

    // exits the program
    return 0;
}