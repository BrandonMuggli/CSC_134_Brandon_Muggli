/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program initializes an array with 5 different values, and outputs the sum of the indexed values to the console
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a constant variable to 5 for use in the array
    const int numElements = 5;

    // initialize variables
    int sum = 0;
    int num = 1;

    // initialize an integer array to the value of (numElements)
    int sumArray[numElements];

    // use a for-loop to generate 5 integer values to be indexed in the array
    // the goal is to generate numbers 1,2,3,4,5
    for (int count = 0; count <5; count++) // initialize counter variable (count) to 0 and increment using (++) in postfix mode
    {
        sumArray[count] = num;  // set each index to the current value of (num)
        sum += sumArray[count]; // increment (sum) using (+=)
        num++;                  // increment (num) using (++) in postfix mode
    }

    // output the sum of the values
    cout<<"The sum of 1+2+3+4+5 is: " <<sum;

    return 0;
}
