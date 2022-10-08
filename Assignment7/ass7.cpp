/*
    Author: Krushil Amrutiya
    Date: 10/06/2022
    Purpose: a program that prompts the user for a positive odd integer
    (and validates the user’s input) and computes the product of odd integers from 1 to
    the number the user entered. If the user’s input is invalid, print an error message
    and re-prompt the user for valid input.
*/

#include <iostream>  // imports the iostream library
using namespace std; // adds std namespace throughout the code where cout and cin are being used

// main function gets executed when the code is ran
int main()
{

    int num;                    // initializes num variable as integer as is used to collect user input
    int controlledSentinel = 1; // sets controlledSentinel variable as integer with the value of 1 as it is used to stop the while loop
    int productNums = 1;        // sets productNums variable as integer with the value of 1 as it used to find the product of odd numbers

    cout << "Enter a positive odd integer => "; // prompts the user to enter a positive odd integer
    cin >> num;                                 // stores user's input inside the num variable

    // controlled-sentinel while loop runs until the controlledSentinel variable's value does not eqaul 0
    while (controlledSentinel != 0)
    {

        // if statement runs if the value of num variable is either an even number or is less than 0
        if (num % 2 == 0 || num < 0)
        {
            cout << "Error; enter a positive odd integer => "; // prompts the user to re-enter another positive odd integer
            cin >> num;                                        // stores user's input inside the num variable
        }

        // if statment runs if the value of num variable is either an odd number and is greater than 0
        if (num % 2 != 0 && num > 0)
        {
            for (int i = 1; i <= num; i++) // for loop runs until i isn't less than or equal to the value of num
            {
                if (i % 2 != 0) // if statment picks out the odd number while the for loop is running till the number the user entered
                {
                    productNums *= i; // productNums variable stores productNums and multiplies itself by i to find the product
                }
            }
            cout << "The product is: " << productNums << endl; // displays the product number to the user
            controlledSentinel = 0;                            // the value of controlledSentinel variable gets set to 0 making the while loop to stop running
        }
    }

    return 0; // exits the program
}
