/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program lists the days of the week
*/

// include the iostream library for input/output and string for the string array
#include <iostream>
#include <string>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // create the array given by the lab
    const int TOTAL_SIZE = 10;
    int numbers[TOTAL_SIZE] = {10,90,2,25,44,88,0,4};

    // use an outer loop and inner loop to sort the array
    for (int out = 0; out < TOTAL_SIZE - 1; out++)
    {
        for (int in = 0; in < TOTAL_SIZE - out - 1; in++)
        {
            if (numbers[in] < numbers[in + 1])
            {
                int swap = numbers[in];
                numbers[in] = numbers[in + 1];
                numbers[in + 1] = swap;
            }

        }

        // use a for-loop to output the numbers in ascending order
        for ( int count = 0; count < TOTAL_SIZE; count++)
        {
            cout<<numbers[count] <<endl;
        }
    }

    return 0;
}