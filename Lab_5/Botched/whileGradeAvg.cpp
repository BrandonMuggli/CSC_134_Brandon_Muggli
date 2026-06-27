/*
@author: Brandon Muggli
@date: 06/26/26
@purpose: This program collects 10 grades and uses a while loop to average them together
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    
    // create a count variable for use in the while statement
    // create floating point grade variables
    int count = 0;
    double test = 0.00, alltest = 0.00, res = 0.00;

    // use a while loop to prompt for 10 grades
    while (count <= 10)
    {
        // increase the count variable (count) using the standard increment operator (+=)
        count += 1;
        
        // collect test score and store them in the variable (test)
        cout<<"Enter Test " <<count <<" grade ";
        cin>> test;

        // add each test score into the variable (alltest) using the standard increment operator (+=)
        alltest += test;
    }

    // perform the average calculation and store it in the variable (res)
    res = alltest / 10.00;

    // display the result to the console
    cout<<"The average of all your test grades is " <<res;

    return 0;
}