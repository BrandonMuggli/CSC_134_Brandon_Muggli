/*
@author: Brandon Muggli
@date: 06/30/26
@purpose: This program uses a for-loop to count down from 100 to 1 and displays each iteration to the console
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // Initialize iteration variable (itr) 
    int itr = 101;

    // create a for loop that loops from 100 down to 1 using the decrement operator (--)
    for (int ver = 100; ver >= 0; ver--)
    {
        itr--; // decrement the iteration variable using postfix mode
        cout<<"This is iteration: " <<itr <<endl; // display the current iteration to the console on a new line
    }

    // display final iteration to console
    cout<<"The final iteration is: " <<itr;

    return 0;
}