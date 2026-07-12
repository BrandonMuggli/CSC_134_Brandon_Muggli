/*
@author: Brandon Muggli
@date: 07/11/26
@purpose: This program calculates a 6% yearly increase to a country club menbership and displays the results to the console
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a variable to store the starting membership cost and new cost
    float initialCost = 250000.00;
    float newCost = 0.00;
    
    // output the starting membership cost and future costs to the console
    cout<<"The starting membership cost for Pinehurst Country Club is " <<initialCost <<endl;
    cout<<"\n" <<"Here is what a 6% yearly dues increase would look like over the course of 5 years:" <<endl;


    // create a for-loop to display the cost for each year to the console
    for ( int year = 1; year <= 5; year++)                  // initialize the counter (year) to 1 and increment it by 1 using the increment operator (++)
                                                            // in postfix mode for each iteration
    {
        newCost = (initialCost)+(initialCost * 0.06);       // calculate the yearly increase
        cout<<"Year " <<year <<": " <<"$"<<newCost <<endl;  // output the yearly cost to the console on its own line
        initialCost += (initialCost * 0.06);                // increment (initialCost) using the custom increment operator (+=)
    }

    return 0;
}
