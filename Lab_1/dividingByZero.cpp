/*
@author:Brandon Muggli
@date: 06/02/26
@purpose:Capture a number and divide it by zero
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    int num1 = 5; 
    int quotient = num1 / 0;
    cout << "the quotient of " <<num1<< " and " << 0 << " is " << quotient << endl;
    return 0;
}