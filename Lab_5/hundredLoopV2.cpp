/*
@author: Brandon Muggli
@date: 06/26/26
@purpose: This program uses a while loop to generate 100 iterations. includes counter and displays number of iterations
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    
    // create a variable to be used as a counter in the while loop
    int num = 0;

    // use a while loop to create a 100-iteration loop
    while (num != 100)
    {
        // increase the count by 1 using the increment operator (++) in prefix mode
        ++num;

        // output current iteration on its own line
        cout<<" This is iteration " <<num <<endl;
    }

    cout<<"The number of iterations reached is " <<num;

    return 0;
}