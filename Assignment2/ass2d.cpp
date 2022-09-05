//  Created by Krushil Amrutiya on 8/30/22.

// This program compares two integers and displays their relationship

#include <iostream>  // Imports iostream library
using namespace std; // adds std namespace for cout and cin

int main()
{ // Main function that gets executed

    int number1; // Initializes number1 variable as integer
    int number2; // Initializes number2 variable as integer

    cout << "Enter two integers to compare => "; // Prompts the user a print statement
    cin >> number1 >> number2;                   // Collects user's input and stores it into variables named
                                                 // number 1 and number2

    if (number1 == number2)                               // if statement gets triggered if number1 equals number2
        cout << number1 << " equals " << number2 << endl; // prints the number1 equals to number2

    if (number1 != number2)                                       // if statement gets triggered if number1 doesn't equals number2
        cout << number1 << " does not equal " << number2 << endl; // prints the number1 doesn't equal to number2

    if (number1 > number2)                                         // if statement gets triggered if number1 is greater than number2
        cout << number1 << " is greater than " << number2 << endl; // prints the number1 is greater than to number2

    if (number1 < number2)                                      // if statement gets triggered if number1 less than number2
        cout << number1 << " is less than " << number2 << endl; // prints the number1 is less than to number2

    if (number1 >= number2)                                                    // if statement gets triggered if number1 is greater than or equal to number2
        cout << number1 << " is greater than or equal to " << number2 << endl; // prints the number1 is greater than or equal to number2

    if (number1 <= number2)                                                 // if statement gets triggered if number1 is less than or equal to number2
        cout << number1 << " is less than or equal to " << number2 << endl; // prints the number1 is less than or equal to number2

    return 0; // Exists the program
}
