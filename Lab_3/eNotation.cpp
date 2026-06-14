/*
@author: Brandon Muggli
@date: 06/14/26
@purpose: this program prints Avogadro's number in E notation
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // create a floating point variable using float since the number to be used does not exceed 3.4x10^38
    float avnum;
    
    // define the floating point variable 
    avnum= 6.02214076*(1e23);

    // print Avogardro's number to the console
    cout<<"Avogadro's number in E notation is " <<avnum;

    return 0;
}