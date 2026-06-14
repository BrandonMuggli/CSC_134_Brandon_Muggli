/*
@author: Brandon Muggli
@date: 06/13/26
@purpose: This program adds two floating point numbers together and prints the result to the console
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the variables
    float num1, num2, result;

    // obtain the first real number and store it in the variable (num1)
    cout<< "please enter a real number ";
    cin>> num1;

    // obtain the second real number and store it in the variable (num2)
    cout<< "please enter a second real number ";
    cin>> num2;

    // add the variables (num1) and (num2) together and store them in the variable (result)
    result = num1 + num2;

    // print the result to the console 
    cout<<"The sum of the two real numbers is " <<result;

    return 0;    
}
