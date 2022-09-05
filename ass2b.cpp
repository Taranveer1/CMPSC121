//  Created by Krushil Amrutiya on 8/30/22.

// This program illustrates the use of cout and cin
#include <iostream>  // imports the iostream library
#include <string>    // imports the string library
using namespace std; // uses std namespaces for input and print statements

int main() // main function gets executed when the code is ran
{

    int year;  // initializes year variable as integer
    int month; // initializes month variable as integer
    int day;   // initializes day variable as integer

    cout << "Enter the month, day, and year in integer form." << endl; // print statement
    cin >> month >> day >> year;                                       // input statement for month, day, and year

    cout << month << "/" << day << "/" << year << endl; // prints the out in a date format

    return 0; // exists the program
}