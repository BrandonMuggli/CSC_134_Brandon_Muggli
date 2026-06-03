/*
@author: Brandon Muggli
@date: 06/03/26
@purpose: This program calculates the voltage (result) by multiplying current (I) and resistance (R)
*/

// Include iostream for input/output
#include <iostream>

// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the variables
    double I, R, result;

    // obtain the current and store it in the variable (I)
    cout<< "Please enter the circuit's current (in amps): ";
    cin>> I;

    // obtain the resistance and store it in the variable (R)
    cout<< "Please enter the resistance of the circuit (in ohms): ";
    cin>> R;

    // calculate the voltage and store it in the variable (result)
    result = I * R;

    // print the result to the console
    cout<< "The voltage of the circuit is " <<result<< " volts";
}