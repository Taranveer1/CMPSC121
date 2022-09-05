//  Created by Krushil Amrutiya on 8/30/22.

// This program extracts words from a long string
#include <iostream>  // imports iostream library
#include <string>    // imports string library
using namespace std; // uses std namespace for input and print statements

int main()
{ // main function gets executed when the code is ran

    string name = "Krushil X Amrutiya";                       // variable name set as string to Krushil X Amrutiya
    int index;                                                // initializes variable index as integer
    index = name.find(' ');                                   // index variable finds for space in the name variable
    cout << "First Name: " << name.substr(0, index) << endl;  // prints the first name
    name = name.substr(index + 1, name.length() - 1);         // name adds the index with 1 by substracting the length of its size by 1
    index = name.find(' ');                                   // index variable finds for space in the name variable
    cout << "Middle Name: " << name.substr(0, index) << endl; // prints the middle name
    name = name.substr(index + 1, name.length() - 1);         // name finds for last name by adding 1 to the index variable by name's length size substracting 1
    cout << "Last Name: " << name << endl;                    // prints last name

    return 0; // exists the program
}
