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

    // collect a year and store it in the variable (yr)
    cout<<"What year would you like to check: ";
    cin>> yr;

    // create an if statement to check the first and second qualifying condition
    if (yr % 4 == 0 ){
         if(yr % 400 == 0){
        cout<<"The year " <<yr <<" is a leap year";}
    cout<< "The year " <<yr <<" is a leap year";}

    //else if (yr % 100 !=0){
    //cout<<"The year " <<yr <<" is not a leap year";}

   // else 
    //cout<<"The year " <<yr <<" is a leap year";
            

    return 0;

}
