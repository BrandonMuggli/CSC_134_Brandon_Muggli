/*
@author: Brandon Muggli
@date: 06/02/26
@purpose: Take the square root of a real number and print the result
*/

//include the iostream and cmath libraries to use input/output and math functions
//include the required directives/libraries for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //create the variables for the program
    double num, result;

    //ask for a number and store it in the variable (num)
    cout<< "Enter a real number: ";
    cin >> num;

    //calculate the square root of the number and store it in the variable (result)
    result = sqrt(num);

    //print the result to the console
    cout<< "The square root of " << num << " is " <<result<< endl;

    return 0;
}