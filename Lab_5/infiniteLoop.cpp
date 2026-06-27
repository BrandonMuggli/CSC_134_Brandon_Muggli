/*
@author: Brandon Muggli
@date: 06/26/26
@purpose: This program creates an infinite loop
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // create a variable and set it equal to an integer value
    int num=1;

    // use a while loop to generate an infinite number of messages (since (num) will never increase)
    while (num < 10)
        {cout<<"This is infinite ";}

    return 0;
}