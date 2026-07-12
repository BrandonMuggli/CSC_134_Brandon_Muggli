/*
@author: Brandon Muggli
@date: 07/12/26
@purpose: This program creates a multiplication table using nested for-loops
*/

// include the iostream library for input/output and iomanip for (setw) function
#include <iostream>
#include <iomanip>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    //create an outer loop to handle the rows
    for (int row = 1; row <= 10; row++)
    {
       //create an inner loop to handle collumns
       for (int col = 1; col <= 10; col++)
       {
        cout<< setw(6);        // use (setw) to set the width between characters. problem here: aligns the digits wrong in console
        cout<< (row * col);    // creates the products of the two multiplied numbers
       }
       
       // start a new line to ...
       // idea for chess board lab:exclude "/n"
       //cout<<"\n";
    }

    return 0;
    
}