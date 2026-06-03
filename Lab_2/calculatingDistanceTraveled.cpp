/*
@author: Brandon Muggli
@date: 06/03/26
@purpose: This program calculates the distance (result) traveled by multiplying the velocity (velo) and time (ti) variables
*/

//Include iostream for input/output
#include <iostream>

//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    //Define the variables
    double velo, ti, result;

    //Obtain the velocity and store it in the variable (velo)
    cout<<"Please enter a velocity (in miles per hour): ";
    cin>> velo;

    //Obtain the distance traveled and store it in the variable (ti)
    cout<<"Please enter the time traveled (in hours): ";
    cin>> ti;

    //Calculate the distance and store it in the variable (result)
    result = velo * ti;

    //Print the result to the console
    cout<< "The distance traveled is " << result << " miles";

    return 0;
}