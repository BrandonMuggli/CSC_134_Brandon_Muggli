/*
@author: Brandon Muggli
@date: 06/30/26
@purpose: This program uses a for-loop to display a multiplication table for an entered integer
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a variable to be collected
    int num = 0;

    // collect an input from the user
    cout<<"Please enter a number: ";
    cin>>num;

    // create the heading of the table using cout
    cout<<"\n\nMultiplication table for:\n";
    cout <<"           " <<num <<endl;
    cout<<"-------------------------\n";

    // create a for-loop to run the collected number through 12 iterations
    for (int ver = 0; ver <= 12; ver++)
    {
        cout<<num <<" times " <<ver <<" is " << num * ver <<endl; // display each result on a new line 
    }

    return 0;
}