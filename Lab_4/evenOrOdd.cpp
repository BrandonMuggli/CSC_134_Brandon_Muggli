/*
@author: Brandon Muggli
@date: 06/17/26
@purpose: This program captures an integer, and determines if the captured integer is even or odd
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // create the necessary variables
    int num1=0;

    // capture an integer value and store it in the variable (num1)
    cout<<"Please enter an integer value: ";
    cin>> num1;

    // create if/else statements to obtain the correct output
    // use modulus operator to determine even/odd
    if (num1 % 2 == 0){
        cout<<"The integer value you have entered is even!";}
    else cout<<"The integer value you have entered is odd!";

    return 0;
}