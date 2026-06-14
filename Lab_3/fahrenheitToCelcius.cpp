/*
@author: Brandon Muggli
@date: 06/14/26
@purpose: this program converts temperature from fahrenheit to celcius
*/

//include the iostream library for input/output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the floating point values
    float far, cel;

    // capture the temperature in fahrenheit and store it in the variable (far)
    cout<<"Please enter the temperature in degrees farenheit: ";
    cin>> far;

    // perform the conversion calculation and store it in the variable (cel)
    cel = (far - 32) * (5.0/9);

    // print the result of the calculation to the console
    cout<<"The temperature in celcius is " <<cel <<char(248);

    return 0;
}