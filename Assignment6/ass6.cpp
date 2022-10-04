/*
    Author: Krushil Amrutiya
    Date: 09/27/2022
    This program determines the monthly credit card charges for
    a client and whether the last month’s balance minus any payment made that month
    plus each charge exceeds the credit limit for that customer.
*/

#include <iostream>  // imports the iostream library
using namespace std; // adds using namespace std to cin and cout

int main()
{

    float lastMonthBalance; // initialized the lastMonthBalance variable as a float so it can accept decimals from user input
    float lastMonthPayment; // initialized the lastMonthPayment variable as a float so it can accept decimals from user input
    float creditLimit;      // initialized the creditLimit variable as a float so it can accept decimals from user input
    float charge;           // initialized the charge variable as a float so it can accept decimals from user input
    float beginningBalance; // initialized the beginningBalance variable as a float so it can output the beginning balance with decimals
    float newBalance;       // initialized the newBalance variable as a float so it can output the new balance for the user

    cout << "Enter last month's balance => $"; // prompts the user to enter their last month's balance
    cin >> lastMonthBalance;                   // lastMonthBalance variable stores the user input for the user's last month's balance

    cout << "Enter the payment made on the last balance => $"; // prompts the user to enter the payment they made on their previous balance
    cin >> lastMonthPayment;                                   // lastMonthPayment variable stores the user input for the user's payment they made on their previous balance

    cout << "Enter your credit limit on this card => $"; // prompts the user to enter the credit limit they have on their card
    cin >> creditLimit;                                  // creditLimit variable stores the user input for what the user entered

    beginningBalance = lastMonthBalance - lastMonthPayment; /* beginning balance gets calculated by subtracting the value from
                                                            last month's balance by the value of last month's payment */

    cout << "Beginning Balance = $" << beginningBalance << endl; // displays the beginning balance which gets calculated inside the beginning balance variable

    cout << "Enter a charge (enter 0 to exit) => $"; // prompts the user to enter a charge
    cin >> charge;                                   // stores the user's charge inside the charge variable

    newBalance = beginningBalance + charge; /* newBalance variable calculates the user's new balance by adding
                                            the value from beginningBalance variable and the value of charge variable */

    cout << "New balance = $" << newBalance << endl; // displays the user's new balance through the value of newBalance variable

    while (charge != 0)
    {
        // if statement gets executed if the value of newBalance is greater than the value of creditLimit variable
        if (newBalance > creditLimit)
        {
            // sets the value of charge to 0 if the credit limit exceeds from the user's balance and stops the while loop from executing further
            charge = 0;
            cout << "Credit limit exceeded!" << endl; // displays that the credit limit has exceeded
        }

        if (newBalance < creditLimit)
        {
            cout << "Enter a charge (enter 0 to exit) => $"; // prompts the user to enter a charge
            cin >> charge;                                   // stores the user's charge inside the charge variable
            newBalance += charge;                            // new balance gets calculated by adding the value of newBalance variable with charge variable's value
            cout << "New balance = $" << newBalance << endl; // displays user's new balance from value of newBalance variable
        }
    }

    return 0; // exits the program
}