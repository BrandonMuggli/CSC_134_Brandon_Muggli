/*
@author: Brandon Muggli
@date: 06/29/26
@purpose: This program uses a for loop to count the number of times a loop is ran, and display that number to the console 
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    int count = 0; // create a variable to use as a counter in the upcoming for-loop 

    for (int ver = 0; ver < 10; ver++) // create veriable (ver) and use to create a loop that executes 10 times
    {
        count++; // increments the counter variable (count) using the postfix increment operator
        cout<<"The loop executed " <<count <<" times." <<endl; // outputs desired message to the console
    }

return 0;
}

