/*
    Author: Krushil Amrutiya

    Date: 09/22/2022

    This program finds the largest and smallest number
    of 10 integers using a counter-controlled while loop.
*/

#include <iostream> // imports the iostream library
using namespace std; // adds using namspace std to cin and cout

int main() // main function gets execution when the file is executed
{

    const int MAX = 10; // max loops

    int count = 0; // count for the while loop
    int input;     // stores each
    int smallest;  // output
    int largest;   // output

    cout << "Enter ten integers => "; // prompts the user with instructions
    cin >> input; // stores user's input

    largest = input; // largest variable stores the value of input from above about what the user entered
    smallest = input; // smallest variable stores the value of the input from above about what the user entered

    while (MAX > count) // counter-controlled while loop runs until MAX variable is greater than the value inside the count variable
    {
        if (count < 9) // if statement runs if count value is less than 9
        {
            cin >> input; // stores the input from the user
        }

        if (input > largest) // if statement gets executed if input is greater than largest variable's value
        {
            largest = input; // largest variable value gets set to the input value if the statement gets executed
        }

        if (input < smallest) // if statement gets executed if input is less than smallest variable's value
        {
            smallest = input; // smallest variable value gets set to the input value if the statement gets executed
        }

        count++; // appends count variable's by 1
    }
    cout << "Largest number is: " << largest << endl; // outputs the largest number from user's input of 10 integers
    cout << "Smallest number is: " << smallest << endl; // outputs the smallest number from the user's input of 10 integers

    return 0; // exits the program
}