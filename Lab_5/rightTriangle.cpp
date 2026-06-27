/*
@author: Brandon Muggli
@date: 06/26/26
@purpose: This program calculates the angle of a right triangle 
*/

// include the iostream, cmath, and iomanip libraries for input/output and more functions
#include <iostream>
#include <iomanip>
#include <cmath>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // create variables
    float adj = 0.00, opp = 0.00, hyp = 0.00, theta = 0.00;

    // capture the length of the adjacent leg and store it in the variable (adj)
    cout<<"Enter the length of the leg adjacent to theta: ";
    cin>> adj;

    // capture the length of the opposite leg and store it in the varible (opp)
    cout<<"Enter the length of the leg opposite to theta: ";
    cin>> opp;

    // calculate the angle and hypotenuse, store them in the variables (theta) and (hyp)
    theta = atan2(opp , adj) * (180/3.14159);
    hyp = sqrt( pow(adj,2) + pow(opp,2) );

    // set precision to 2 decimal places 
    cout<< setprecision(2) <<fixed;

    // add space to clean up console view
    cout<<"\n";

    // display the value of theta and the hypotenuse
    cout<<"Theta is " <<theta <<" degrees" <<endl;
    cout<<"The hypotenuse is " <<hyp <<" units" <<endl;

    // use an IF/ELSE statement to output the desired message
    if (theta == 53.13 || hyp == 5.00)
        {cout<<"This is a 3-4-5 triangle";}

    else 
        cout<<"This is NOT a 3-4-5 triangle";

    return 0;
}