//
//  main.cpp
//  ass1d
//
//  Created by Krushil Amrutiya on 8/25/22.
//

// This program computes the radius of a circle
#include <iostream>
using namespace std;

int main() { // Main function
    
    const double CIRCUMFERENCE = 10.0; // Constant variable with a type of double named circumference with the value of 10.0
    
    double radius; // Variable named radius with the type of double
    
    radius = CIRCUMFERENCE / 2 * 3.14159265; // radius set equal to circumference variable divided by 2 and multiplied with pi
    
    cout << "The radius is " << radius << endl; // Prints the radius
    
    return 0; // Exits the program
}
