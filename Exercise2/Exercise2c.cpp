/* 
    Date: 10/04/2022
    Author: Krushil Amrutiya
    Program: Determines whether an integer is odd or even.
*/

#include <iostream> // imports the iostream library.
using namespace std; // adds std to every cout and cin.

int main() { // main function gets executed when code is ran.

    int a; // initializes variables a and b as integers

    cout << "Enter an integer => "; // prompts the user to enter an integer

    cin >> a; // stores the input from the user inside variable a

    // if statement executes if a module does not equal zero
    if (a % 2 != 0) {
        // displays the value of variable a module 2 and what it equals
        cout << a << " modulo " << 2 << " = " << a % 2 << endl;
        // displays that the value of variable a is odd
        cout << a << " is odd" << endl;
    } else {
        // displays the value of variable a module 2 and what it equals
        cout << a << " modulo " << 2 << " = " << a % 2 << endl;
        // displays that the value of variable a is even
        cout << a << " is even" << endl;
    }

    // exits the program
    return 0;
}