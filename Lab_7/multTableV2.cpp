/*
@author: Brandon Muggli
@date: 07/12/26
@purpose: This program creates a multiplication table using nested for-loops
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    //create an outer loop to generate the rows
    for (int row = 1; row <= 10; row++)
    {
       //create an inner loop to generate collumns
       for (int col = 1; col <= 10; col++)   // initialise the counter variable (col) to 1
       {
        cout<<"\t";                          // use the operator (/t) to set the width between each number
        cout<< (row * col);                  // calculates the product of (a number on a row) * (a number on a collumn)
       }
       
       // create new rows using the ("/n") operator
       cout<<"\n";
    }
    
    return 0;
}