/*
@author: Brandon Muggli
@date: 06/13/26
@purpose: This program calculates the volume of a sphere when given a radius
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the variables 
    float vol, rad;

    // capture the radius and store it in the variable (rad)
    cout<<"please enter the radius of the sphere: ";
    cin>> rad;

    // perform the volume calculation and store it in the variable (vol)
    vol = (4.0/3) * 3.1415 * (rad * rad * rad);

    // print the result to the console
    cout<<"the volume of a sphere with a radius of "<<rad<<" is "<<vol<<" units^3";

    return 0;
}