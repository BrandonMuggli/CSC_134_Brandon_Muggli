/*
@author: Brandon Muggli
@date: 06/30/26
@purpose: This program uses a for-loop to sum up iterations and print the total sum to the console
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize the required variables
    int sumOp = 0;
    int adder = 10;

    // initialize the counter variable (count)
    int count = 0;

    // create a 50 loop for-loop that sums (count) and (adder) with (sumOp) and stores the result in (sumOp)
    for (int ver = 0; ver < 50; ver++)
    {
        sumOp = sumOp + (count + adder); // adds the sum of (count) and (adder) to the current value of sumOp and stores the new total in (sumOp) 
        count++; // increments (count) for each iteration 
        cout<<"The total thus far is: " <<sumOp <<endl; // outputs the total value of sumOp for each iteration
    }

    return 0;
}