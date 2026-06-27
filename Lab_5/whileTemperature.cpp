/*
@author: Brandon Muggli
@date: 06/26/26
@purpose: This program uses a while loop to repeatedly ask for a temperature unless the desired temperature is entered
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    
    // create a variable 
    double temp = 0.00;

    // use a while statement to prompt for a temperature 
    while (temp != 212.34)
    {
        // collect a value and store it in the variable (temp)
        cout<<"Please enter a temperature: ";
        cin>> temp;
    }
    
    // output success message when desired number has been entered
    cout<<"The temperature has been successfully set, thank you.";

    return 0;
}