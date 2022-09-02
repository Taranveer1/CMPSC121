//
//  main.cpp
//  ass1c
//
//  Created by Krushil Amrutiya on 8/25/22.
//

// This program demonstrates the use of three functions
#include <iostream>
using namespace std;

// Function prototypes
int square(int); // Sets the function with the name of sqaure with integer
int cube(int); // Sets the function with the name of cube with integer

int main() { // Main function
    cout << "The square of 27 is " << square(27) << endl; // Prints the square of 27
    cout << "The cube of 27 is " << cube(27) << endl; // Prints the cube of 27
    
    return 0; // Exits the program
}

int square (int n) { // Function of square that takes n as a value
    return n * n; // Multiplies value of n with n and returns it back to where the function is being called
}

int cube (int n) { // Function of cube that takes n as a value
    return n * n * n; // Gets the cube of number being passed inside the function cube and returns it back to where the function is being called
}
