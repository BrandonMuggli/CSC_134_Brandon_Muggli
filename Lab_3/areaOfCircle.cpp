/*
@author: Brandon Muggli
@date: 06/13/26
@purpose: This program calculates the area of a circle for a given radius
*/

//incluce the iostream library for input/output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the variables
    float area, rad;

    // capture the radius and store it in the variable (rad)
    cout<< "Enter the radius of your circle ";
    cin>> rad;

    // perform the area calculation and store the result in the variable (area)
    area = 3.1415 * (rad * rad);

    // print the result to the console
    // an extended ascii table was used to find the character
    cout<<" the area of a circle with a radius of "<<rad <<" is "<<area<<" units"<<char(253);

    return 0;
}