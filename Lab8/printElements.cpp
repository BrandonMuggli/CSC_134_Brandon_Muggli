/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program prints the value of specific array indexes
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // create the array given by the lab
    const int SIZE = 7;
    int numberList[SIZE] = {1,2,4,8};

    // use a for-loop to output each index value to the console
    for(int count = 0; count < SIZE; count++) // initialize counter variable (count) and increment using (++) in postfix mode
    {
        cout<<"The value in index " <<count <<" is: " <<numberList[count] <<endl;
    }

    return 0;
}