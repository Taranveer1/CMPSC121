/*
    Date: 10/04/2022
    Author: Krushil Amrutiya
    Purpose: Prompts the user for 3 integers and computes each form.
*/

#include <iostream> // imports the iostream library.
using namespace std; // adds std to every cout and cin.

int main() { // main function gets executed when code is ran.

    int a, b,c; // initializes variables a, b, and c as integers.

    cout << "Enter 3 integers => "; // prompts the user what to do.

    cin >> a; // stores the first number inside variable a from user input.
    cin >> b; // stores the second number inside variable b from user input.
    cin >> c; // stores the third number inside variable c from user input.

    // adds variables a with b and then times it with c and displays the output.
    cout << a << " plus (" << b << " times " << c << ") = " << a + b * c << endl;

    // adds variable a + b first, and then multiplies it with varaible c and displays the output
    cout << "But (" << a << " plus " << b << ") times " << c << " = " << (a + b) * c << endl;

    // exits the program
    return 0;
}