/*
    Date: 10/04/2022
    Author: Krushil Amrutiya
    Purpose: This program prompts the used for a 5-digit
    positive integer, separates the digits and displays
    them in reverse order with spaces between the digits.
*/

#include <iostream> // imports the iostream library
using namespace std; // adds std to cout and cin

int main() { // main function gets executed when the code is ran

    int a, b, c, d, e, f; // initializes variables a, b, c, d, e, and f as integers

    cout << "Enter a 5-digit positive integer => "; // prompts the user to enter 5 positive numbers
    cin >> a; // stores the user's input inside variable a

    a = a; // sets a equal to a
    b = a / 10000; // variable b is calculated by a divided by 10000
    c = a / 1000 % 10; // variable c is calculated by variable a being divided by 1000 modulo 10
    d = a / 100 % 10; // variable d is calculated by variable a being divided by 100 modulo 10
    e = a / 10 % 10; // variable e is calculated by variable a being divided by 10 modulo 10
    f = a % 10; // variable f is calculated by variable a modulo 10

    // displays the numbers in reverse
    cout << f << " " << e << " " << d << " " << c << " " << b << endl;

    // exits the program
    return 0;
}