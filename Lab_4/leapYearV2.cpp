/*
@author: Brandon Muggli
@date: 06/19/26
@purpose: This program collects a numbered year and determines if it was/is/will be a leap year
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // create a variable for the year
    int yr = 0;

    // capture a year and store it in the variable (yr)
    cout<<"Enter a year to find out if it is a leap year: ";
    cin>> yr;

    // create an IF statement to check the first qualifying condition and output "is a leap year" to the terminal (if qualifying conditions are met)
    if 
        (yr % 400 == 0)
        {cout<<"The year " <<yr <<" is a leap year";}

    // use an ELSE/IF statement to check the second qualifying condition and output "is a leap year" to the terminal (if qualifying conditions are met)
    // use AND operator (&&) to make sure both conditions are applied to the variable (yr)
    else 
        if (yr % 4 == 0 && yr % 100 != 0)
        {cout<<"The year " <<yr <<" is a leap year";}

    // use an ELSE statement to output "not a leap year" statement when the above conditions are not met
        else 
        cout<<"The year " <<yr <<" is not a leap year";

    return 0;
}
