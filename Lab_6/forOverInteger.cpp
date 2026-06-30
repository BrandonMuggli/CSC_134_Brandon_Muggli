/*
@author: Brandon Muggli
@date: 06/29/26
@purpose: This program uses a for loop to count the number of times a loop is ran based off user input, and displays the number of iterations to the console 
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    
    int count = 0; // Initialize a variable to be used as a counter
    int num = 0; // Initialize a variable to be used as an input

    // obtain a value from the user and store it in the variable (num)
    cout<<"Please enter a number: ";
    cin>>num;


    for (int ver = 0; ver < num; ver++) // initialise an iteration variable and loop until it is no longer less than the value of (num)
    {
        count++; // increments the counter using postfix mode
        cout<<"Iteration: " <<ver <<endl; // outputs the current iteration to the console 
    }

    cout<<"The total number of iterations is: " <<count; // outputs the total number of iterations to the console 

    return 0;
}

// is it ok to use (ver) on line 25 or does it need to be (count)