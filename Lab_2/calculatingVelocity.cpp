/*
@author: Brandon Muggli
@date: 06/03/26
@purpose: This program calculates the velocity (result) by dividing 
          the distance traveled (dis) by the time (ti)
*/

//Include iostream for input/output
#include <iostream>

//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    //define the variables
    double dis, ti, result;

    //obtain the distance traveled and store it in the variable (dis)
    cout<< "Please enter the distance traveled (in miles): ";
    cin>> dis;

    //obtain the time spent traveling and store it in the variable (ti)
    cout<< "Please enter the time spent traveling (in hours): ";
    cin>> ti;

    //calculate the velocity and store it in the variable (result)
    result = dis / ti;

    //print the result to the console
    cout<< "The average velocity is " <<result<< " miles per hour";
}