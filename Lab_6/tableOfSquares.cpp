/*
@author: Brandon Muggli
@date: 06/30/26
@purpose: This program uses a for-loop to display a table of numbers and their squares 
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a minimum (minNum) and a maximum (maxNum) variable 
    const int minNum = 0;
    const int maxNum = 100;

    // create the heading of the table using cout
    cout<<"Number    Number Squared \n";
    cout<<"------------------------ \n";

    // create the for-loop that runs from (minNum) to (maxNum)
    for (int num = minNum; num<= maxNum; num++)
    { 
        cout<<num <<"\t\t "<<(num * num) <<endl; // output the number and its square to the console 
    }

    return 0;
}