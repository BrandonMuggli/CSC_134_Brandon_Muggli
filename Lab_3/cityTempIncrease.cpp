/*
@author: Brandon Muggli
@date: 06/14/26
@purpose: this program calculates a 2 percent increace in city temperatures and sends a report to the console
*/

//include the iostream library for input/output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // define all variables and assign the starting values to variables (ny), (den), (phnx)
    float ny, den, phnx, newny, newden, newphnx;
    ny = 85;
    den = 88;
    phnx = 106;

    // calculate the change in temperature for each city and store it in the variable (new...)
    newny = ny + (ny * .02);
    newden = den + (den * .02);
    newphnx = phnx + (phnx * .02);

    // print the new temperature for New York to the console
    cout<<"If July's average high temperature in New York is 85 degrees fahrenheit, a 2" <<char(37) <<" increase would make the new temperature " 
    <<newny <<" F" <<char(248) <<endl;

    // print the new temperature for Denver to the console
    cout<<"If July's average high temperature in Denver is 88 degrees fahrenheit, a 2" <<char(37) <<" increase would make the new temperature " 
    <<newden <<" F" <<char(248) <<endl;

    // print the new temperature for Pheonix to the console
    cout<<"If July's average high temperature in Pheonix is 106 degrees fahrenheit, a 2" <<char(37) <<" increase would make the new temperature " 
    <<newphnx <<" F" <<char(248) <<endl;

    return 0;
}
