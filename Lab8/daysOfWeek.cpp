/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program lists the days of the week
*/

// include the iostream library for input/output and string for the string array
#include <iostream>
#include <string>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a constant variable for use in the array
    const int numDays = 7;

    // initialize string array and store the proper strings in each index
    string daysOfWeek[numDays] = 
    {
        "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
    };

    // usa a for-loop to output each day of the week to the console
    for (int count = 0; count < numDays; count++) // initialize counter variable (count) and increment it using (++) in postfix mode
    {
        cout<<"Day " <<count + 1 <<": " <<daysOfWeek[count] <<endl;
    }

    return 0;
}