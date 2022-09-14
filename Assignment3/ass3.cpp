//  Created by Krushil Amrutiya

// This program asks the user to enter 3 integers spaced by whitespaces,
// then it prints them back in reverse order

#include <iostream>  // imports iostream library
using namespace std; // uses std namespace for input and print statements

// main function gets executed when the code is ran
int main()
{

    // takes 3 integers from the user and prints them in reverse
    int firstInteger;  // initializes the variable firstInteger as an int
    int secondInteger; // initializes the variable secondInteger as an int
    int thirdInteger;  // initializes the variable thirdInteger as an int

    // print statement to prompt the user what this program does
    cout << "Enter 3 integers separated by whitespace => ";

    cin >> firstInteger;  // takes the input from the user and stores it inside firstInteger variable
    cin >> secondInteger; // takes the input from the user and stores it inside secondInteger variable
    cin >> thirdInteger;  // takes the input from the user and stores it inside thirdInteger variable

    // prints the inputs that were collected from the user in reverse order
    cout << "In reverse order: " << '\t' << thirdInteger << '\t' << secondInteger << '\t' << firstInteger << endl;

    // takes 3 characters from the user and prints it in reverse
    char firstChar;  // initializes the variable firstChar as an char
    char secondChar; // initializes the variable secondChar as an char
    char thirdChar;  // initializes the variable thirdChar as an char

    // print statement to prompt the user what this program does
    cout << "Enter 3 characters separated by whitespace => ";

    cin >> firstChar;  // takes the input from the user and stores it inside firstInteger variable
    cin >> secondChar; // takes the input from the user and stores it inside secondInteger variable
    cin >> thirdChar;  // takes the input from the user and stores it inside thirdInteger variable

    // prints the inputs that were collected from the user in reverse order
    cout << "In reverse order: " << '\t' << thirdChar << '\t' << secondChar << '\t' << firstChar << endl;

    // takes a sentence with 3 words from the user and prints it in reverse
    string firstWord;  // initializes the variable firstWord as an string
    string secondWord; // initializes the variable secondWord as an string
    string thirdWord;  // initializes the variable thirdWord as an string

    // print statement to prompt the user what this program does
    cout << "Enter 3 words separated by whitespace => ";

    cin >> firstWord;  // takes the input from the user and stores it inside firstInteger variable
    cin >> secondWord; // takes the input from the user and stores it inside secondInteger variable
    cin >> thirdWord;  // takes the input from the user and stores it inside thirdInteger variable

    // prints the inputs that were collected from the user in reverse order
    cout << "In reverse order: " << '\t' << thirdWord << '\t' << secondWord << '\t' << firstWord << endl;

    return 0; // exists the program
}