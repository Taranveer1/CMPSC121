//  Created by Krushil Amrutiya on 8/30/22.

// This program shows how to read a line of input one character
// at a time
#include <iostream>  // imports the iostream library
using namespace std; // uses std namespace for input and print statements

int main() // main function gets executed
{
    char ch1, ch2, ch3; // initializes ch1, ch2, and ch3 as character

    cout << "Enter three characters including a space," << endl; // print statment
    cin.get(ch1);                                                // saves the first input in ch1 variable
    cin.get(ch2);                                                // saves the second input in ch2 variable
    cin.get(ch3);                                                // saves the third input in ch3 variable
    cout << "You entered: " << ch1 << ch2 << ch3 << endl;        // print statement

    return 0; // exists the program
}