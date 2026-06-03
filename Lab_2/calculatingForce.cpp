/*
@author: Brandon Muggli
@date: 06/03/26
@purpose: This program calculates the force (result) on an object by multiplying mass (m) and acceleration (a)
*/

//Include iostream for input/output
#include <iostream>

//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the variables
    double m, a, result;

    // obtain the mass and store it in the variable (m)
    cout<< "Please enter the mass of the object (in kg): ";
    cin>> m; 

    // obtain the acceleration of the object and store it in the variable (a)
    cout<< "Please enter the acceleration of the object (in m/s^2): ";
    cin>> a;

    // calculate the force and store it in the variable (result)
    result = m * a;

    //print the result to the console
    cout<< "The force on the object is " <<result<< " newtons";




}