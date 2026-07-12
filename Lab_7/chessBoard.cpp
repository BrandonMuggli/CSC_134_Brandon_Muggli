/*
@author: Brandon Muggli
@date: 07/12/26
@purpose: This program creates a chess board pattern (size is user-specified) using nested for-loops
*/
// include the iostream library for input/output and iomanip for the (setw) function
#include <iostream>
#include <iomanip>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a variable to store the number of user entered rows
    int userRow = 0;

    // capture a number and store it in the variable (userRow)
    cout<<"Please enter the number of rows for your chessboard: ";
    cin>>userRow;

    // use an outer loop to generate rows
    for (int row = 1; row <= userRow; row++)
    {
        // use an inner loop to generate collumns
        for (int col = 1; col <= userRow; col++)
        {
            // use an IF/ELSE statement to output the correct format to the console
            if ((row + col) % 2 == 0)     // use the modulo operator to determine if the sum of (row) and (col) is even or odd
                                          // if the remainder is 0 (if), an asterisk and a space are printed
                                          // if the remainder is not 0 (else), two spaces are printed
            {
                cout<<"*";                // prints an asterisk to the console
                cout<<setw(2);            // sets the proper(ish) spacing between characters                          
            }
            else
            {
                cout<<" ";                // prints a space to the console
                cout<<setw(2);            // sets the proper(ish) spacing between characters             
            }
        }

        // create new rows
        cout<<"\n";
    }

}