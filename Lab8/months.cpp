/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program lists out the number of days in each month
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a constant variable for use in the array
    const int numMonth = 12;

    // initialize the integer array
    int monthArray[numMonth];

    // store the proper number of days in each index
    monthArray[0] = 31;
    monthArray[1] = 28;
    monthArray[2] = 31;
    monthArray[3] = 30;
    monthArray[4] = 31;
    monthArray[5] = 30;
    monthArray[6] = 31;
    monthArray[7] = 31;
    monthArray[8] = 30;
    monthArray[9] = 31;
    monthArray[10] = 30;
    monthArray[11] = 31;

    // use a for-loop to output the number of days in each month
    for (int count = 0; count < numMonth; count++)
    {
        cout<<"Month " <<count + 1 <<" has " <<monthArray[count] <<" days." <<endl;
    }

    return 0;
}