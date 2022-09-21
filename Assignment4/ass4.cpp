/*  Author: Krushil Amrutiya

    Date: 09/15/2022

    This  program prompts the user to enter two non-negative
    integers, and then computes and displays 1) the first added
    to the second, 2) the first subtracted from the second, 3) the second subtracted from
    the first, 3) the first multiplied by the second, 4) the first divided by the second, 5)
    the second divided by the first, 6) the first modulo the second, and 7) the second
    modulo the first.
*/

#include <iostream>  // imports iostream library
using namespace std; // uses std namespace for input and print statements

// main function gets executed when the code is ran
int main()
{

    int integer1; // initializes integer1 variable as integer and stores the input from the user of the first integer
    int integer2; // initializes integer2 variable as integer and stores the input from the user of the second integer

    // prompts the user to enter two non-negative integers following an arrow
    cout << "Enter two non-negative integers => ";
    cin >> integer1; // this stores the first input inside integer1 variable for further use
    cin >> integer2; // this stores the second input inside integer2 variable for further use

    // adds integer1 with integer2 and displays the output
    cout << integer1 << " added to " << integer2 << " is: " << integer1 + integer2 << endl; // displays the output

    // subtracts integer1 from integer2 and displays the output
    cout << integer1 << " subtracted from " << integer2 << " is: " << integer2 - integer1 << endl; // displays the output

    // subtracts integer2 from integer1 and displays the output
    cout << integer2 << " subtracted from " << integer1 << " is: " << integer1 - integer2 << endl; // displays the output

    // multiplies integer1 by integer2 and displays the out
    cout << integer1 << " multiplied by " << integer2 << " is: " << integer1 * integer2 << endl; // displays the output

    // if statement gets executed if integer2 variable is equal to 0
    if (integer2 == 0)
    {
        // displays that integer1 value can't be divided by integer2 value
        cout << "Cannot divide " << integer1 << " by " << integer2 << endl;
    }
    else // else statement gets executed when integer2 does not equal to 0
    {
        // divides integer1 value by integer2 value and displays the output
        cout << integer1 << " divided by " << integer2 << " is: " << integer1 / integer2 << endl;
    }

    // if statement gets executes if integer1 value is equal to 0
    if (integer1 == 0)
    {
        // displays that integer2 value can't be divided by integer1 value
        cout << "Cannot divide " << integer2 << " by " << integer1 << endl;
    }
    else // else statement gets executed when integer1 does not equal to 0
    {
        // divides integer2 value by integer1 value and displays the output
        cout << integer2 << " divided by " << integer1 << " is: " << integer2 / integer1 << endl;
    }

    // if statement gets executed if integer2 value is equal to 0
    if (integer2 == 0)
    {
        // displays that integer2 value can't modulo by integer1 value
        cout << "Cannot compute " << integer1 << " modulo " << integer2 << endl;
    }
    else // else statement gets executed when integer2 does not equal to 0
    {
        // divides integer2 value by integer1 value and displays the output
        cout << integer1 << " modulo " << integer2 << " is: " << integer1 % integer2 << endl;
    }

    // if statement gets executed if integer1 value is equal to 0
    if (integer1 == 0)
    {
        // displays that integer2 value can't modulo by integer1 value
        cout << "Cannot compute " << integer2 << " modulo " << integer1 << endl;
    }
    else // else statement gets executed when integer1 does not equal to 0
    {
        // modulo of integer2 by integer1 and displays the output
        cout << integer2 << " modulo " << integer1 << " is: " << integer2 % integer1 << endl;
    }

    // exits the program
    return 0;
}
