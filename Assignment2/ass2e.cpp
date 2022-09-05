//  Created by Krushil Amrutiya on 9/1/22.

// This program prompts the user for two coordinates and
// displays the location of the point
#include <iostream>  // imports the iostream library
#include <iomanip>   // imports the iomanip libarry
using namespace std; // adds std namespace to input and print statements

int main()
{ // Main function gets executed

    double xCoord, yCoord; // xCoord and yCoord variables being initialized as double

    cout << "Enter two real coordinates => ";                // print statement
    cin >> xCoord >> yCoord;                                 // input state for xCoord and yCoord variables
    cout << fixed << showpoint;                              // prints fixed and showpoint
    cout << "Point (" << xCoord << "," << yCoord << ") is "; // print statement for the coordinates

    if (xCoord == 0.0)
    { // if state if xCoord is equal to 0.0
        if (yCoord == 0.0)
        {                                    // if state if yCoord is equal to 0.0
            cout << "at the origin" << endl; // print statement
            return 0;                        // exists the program
        }
        cout << "on the y-axis" << endl; // print statement
        return 0;                        // exists the program
    }

    if (yCoord == 0.0)
    {                                    // if statement if yCoord is equal to 0.0
        cout << "on the x-axis" << endl; // print statement
        return 0;                        // exists the program
    }

    if (xCoord > 0.0)
    { // if statement if xCoord is greater than 0.0
        if (yCoord > 0.0)
        {                                            // if statement if xCoord is greate than 0.0
            cout << "in the first quadrant" << endl; // print statement
            return 0;                                // exists the program
        }
        cout << "in the fourth quadrant" << endl; // print statement
        return 0;                                 // exists the program
    }

    if (yCoord > 0.0)
    {                                             // if statement if yCoord is greater than 0.0
        cout << "in the second quadrant" << endl; // print statement
        return 0;                                 // exists the program
    }

    cout << "in the third quadrant" << endl; // print statement
    return 0;                                // exists the program
}