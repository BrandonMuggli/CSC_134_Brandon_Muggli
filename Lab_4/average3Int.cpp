/*
@author: Brandon Muggli
@date: 06/17/26
@purpose: This program captures 3 integer values and averages them together
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    
    // create the variables needed for the program
     float num1 = 0.00, num2 = 0.00, num3 = 0.00, res = 0.00;

    // capture the first number and store it in the variable (num1)
    cout<<"Please enter an integer value: ";
    cin>> num1;

    // capture the second number and store it in the variable (num2)
    cout<<"Please enter a second integer value: ";
    cin>> num2;

    // capture the third number and store it in the variable (num3)
    cout<<"Please enter a third integer value: ";
    cin>> num3;

    // perform the average calculation and store the result in the variable (res)
    res = (num1 + num2 + num3)/3.00;

    // print the result to the console 
    cout<<"The average of your three numbers is: "<<res;

    return 0;
}
