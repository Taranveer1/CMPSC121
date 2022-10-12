/*
    Author: Krushil Amrutiya
    Date: 10/11/2022
    Purpose: a program that solves quadratic equations.
*/

#include <cmath>     // imports the math library to do math operations
#include <iomanip>   // imports the iomanip library to use decimal places with setprecision
#include <iostream>  // imports the iostream library for user input and output
using namespace std; // adds std to cin and cout statements

int main()
{ // main function gets executed when the code is ran

    // initializes a, b, c, x1, x2, absValue1, absValue2, output1, output2 as double variable type
    double a, b, c, x1, x2, absValue1, absValue2, output1, output2;

    cout << "Enter coefficients a, b, c => "; // prompts the user for what to do
    cin >> a;                                 // stores the first input inside the a variable
    cin >> b;                                 // stores the second input inside the b variable
    cin >> c;                                 // stores the third input inside the c variable

    // if statement runs if user's input for the first number is equal to 0
    if (a == 0)
    {
        cout << "0 cannot be entered for a. Please try again!" << endl; // prompts the user to try again
    }

    // else statement runs if variable a's value is not equal to 0
    else
    {
        // if statement runs if b times b minus 4 times a times c is less than or equal to 0
        if (((b * b) - 4 * a * c) <= 0)
        {
            x1 = -b / (2 * a);                    // x1 variable gets calculated by dividing -b by 2 times a
            absValue1 = abs((b * b) - 4 * a * c); // absValue1 variable gets calculated by adding absolute value and multiplying b times b minus 4 times a times c
            output1 = sqrt(absValue1);            // output1 variable gets calculated by finding the sqaure root of absValue1 variable's value
            output1 /= (2 * a);                   // output1 is set equal to output1 and divided by 2 times a

            x2 = -b / (2 * a);                    // x2 variable gets calculated by dividing -b by 2 times a
            absValue2 = abs((b * b) - 4 * a * c); // absValue2 variable gets calculated by adding absolute value and multiplying b times b minus 4 times a times c
            output2 = sqrt(absValue2);            // output2 variable gets calculated by finding the sqaure root of absValue2 variable's value
            output2 /= (2 * a);                   // output2 is set equal to output2 and divided by 2 times a
            
            // if statement runs if b and c variable's value are equal to 0
            if (b == 0 && c == 0) {
                // displays the output
                cout << "Complex solution: " << " -" << output1 << endl; 
            } else if (b == 0) { // else if statment if b is equal to 0
                // displays the output with two complex solutions
                cout << "Two complex solutions: " << " +" << setprecision(3) << output1 << "i and " << " -" << setprecision(3) << output2 << "i" << endl;
            } else { // else statement runs if not of the statements from above are valid
                // displays the complex solution outputs to the user using quadratic formula with 3 decimal places
                cout << "Two complex solutions: " << x1 << " + " << setprecision(3) << output1 << "i and " << x2 << " - " << setprecision(3) << output2 << "i" << endl;
            }
        }

        // else statement gets executed if b times b minus 4 times a times c is not less than or equal to 0
        else
        {
            /* x1 variable's value gets calculated by taking negative b and adding it
            with square root of power of b with 2, subtracting with -4 times a
            times c and dividing the whole set with 2 times a */
            x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

            /* x2 variable's value gets calculated by taking negative b and subtracting it
            with square root of power of b with 2, subtracting with -4 times a times c
            and dividing the whole set with 2 times a */
            x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

            // displays the output
            cout << "Two solutions: " << setprecision(3) << x1 << " and " << setprecision(3) << x2 << endl;
        }
    }
    return 0; // exits the program
}