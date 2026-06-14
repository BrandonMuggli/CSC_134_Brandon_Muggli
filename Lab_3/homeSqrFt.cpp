/*
@author: Brandon Muggli
@date: 06/13/26
@purpose: this program calculates the square footage of a house and prints the result to the console with the correct units
*/

//incluce the iostream library for input/output and cmath for operations
#include <iostream>
#include <cmath>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the variables 
    int length = 50;
    int width = 32;
    int area = length * width;

    // print the area to the console
    // an extended ascii table was used to find the character 
    cout<<"The area of the house is: "<<area<<" feet"<<char(253);

    return 0;
}