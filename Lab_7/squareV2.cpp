/*
@author: Brandon Muggli
@date: 07/12/26
@purpose: This program creates a square (the size is user specified) using nested for-loops
*/

// include the iostream library for input/output and iomanip library for the (setw) function
#include <iostream>
#include <iomanip>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize variable to store the desired side length
    int sidelength = 0;

    // capture a number and store it in the variable (sidelength)
    cout<<"Please enter a desired side-length: ";
    cin>>sidelength;

    // use an outer loop to generate rows
    for (int row = 1; row <= sidelength; row++)
    {
        // use an inner loop to generate collumns
        for (int col = 1; col <= sidelength; col++)
        {
            cout<<setw(3);   // use (setw) function to set the space between each character (without this, the program generates more of a rectangle)
            cout<<"*";       // output the proper character for each row
        }

        // create new rows
        cout<<"\n";
    }

return 0;
}