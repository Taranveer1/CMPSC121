/*
    Date: 10/04/2022
    Author: Krushil Amrutiya
    Program: This prompts the user for a single character and 
    displays it and its ASCII table equivalent base 10 number.
*/

#include <iostream> // imports the iostream library.
using namespace std; // adds std to every cout and cin.

int main() { // main function gets executed when code is ran.

    char a; // initializes variables a as character 

    cout << "Enter a character => "; // prompts the user to enter a character
    cin >> a; // stores the user's input inside variable a

    // displays user's character corresponding to the data in ACII table
    cout << "In the ASCII table the character " << a << " is assigned " << int(a) << endl;

    // exits the program
    return 0;
}