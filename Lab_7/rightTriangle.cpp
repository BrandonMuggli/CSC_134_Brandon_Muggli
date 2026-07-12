/*
@author: Brandon Muggli
@date: 07/12/26
@purpose: This program creates a right triangle (with a size specified by the user) using nested for-loops
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a variable to store the number of rows entered by the user
    int userRow = 0;

    // capture a number and store it in the variable (userRow)
    cout<<"Please enter the number of rows in the right triangle: ";
    cin>>userRow;

    // create an outer loop to generate rows
    for (int row = 1; row <= userRow; row++)
    {
        // create an inner loop to generate the collumns and print the proper number of (*) characters
        for (int col = 1; col <= row; col++)
        {
            cout<<"*";
        }

        // create new rows
        cout<<"\n";
    }

    return 0;
}
