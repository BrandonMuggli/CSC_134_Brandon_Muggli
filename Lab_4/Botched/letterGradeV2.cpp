/*
@author: Brandon Muggli
@date: 06/17/26
@purpose: This program captures 3 integer values and averages them together to determine what letter grade the average falls under
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    
    // create the variables needed for the program
     float num1, num2, num3, res;

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

    // create if/else chain to print desired result to console
    if
        (res >= 60){
        if
            (res >= 70){
            if
                (res >= 80){
                if
                    (res >= 90){
                    cout<<"Your letter grade is an A";}
                else
                cout<<"Your letter grade is a B";}
            else
            cout<<"Your letter grade is a C";}
        else
        cout<<"Your letter grade is a D";}
    else
    cout<<"Your letter grade is an F";

    return 0;
}