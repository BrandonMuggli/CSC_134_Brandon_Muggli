/*
@author: Brandon Muggli
@date: 06/30/26
@purpose: This program uses an accumulator to count the number of iterations, which should be 100, and display the total number of iterations to the console
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // Initialize accumulator value (acc)
    int acc = 0;

    // set up a for loop to loop for 100 iterations
    for (int itr = 0; itr < 100; ++itr)
    {
        acc++; // incrememt the accumulator for each loop 
        cout<<"This is iteration: " <<acc <<endl; // display each iteration to the console on a new line
    }

    // output the final iteration to the console after the for-loop terminates
    cout<<"The accumulator value is: " <<acc;

    return 0;
}