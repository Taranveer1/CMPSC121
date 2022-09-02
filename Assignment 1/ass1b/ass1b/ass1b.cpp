//
//  main.cpp
//  ass1b
//
//  Created by Krushil Amrutiya on 8/25/22.
//

// This program prints a name in two different formats
#include <iostream> // iostream library
#include <string> // string library
using namespace std; // uses std namespace throughout the code

const string FIRST = "Krushil"; // first name
const string LAST = "Amrutiya"; // last name
const char MIDDLE = 'X'; // middle initial

int main() { // Main function
    
    string firstLast; // Initializes firstLast variable as string
    string lastFirst; // Initializes lastFirst variable as string
    
    firstLast = FIRST + " " + LAST; // firstLast contains the values from global variables FIRST AND LAST
    cout << "Name in first-last format is " << firstLast << endl; // Prints the format of the name
    
    lastFirst = LAST + ", " + FIRST  + ", "; // lastFirst contains values from global variables LAST and FIRST
    cout << "Name in last-first-initial is "; // Print statement
    cout << lastFirst << MIDDLE << '.' << endl; // Prints lastFirst variable value with MIDDLE variable value
    
    return 0; // Exits the program
}
