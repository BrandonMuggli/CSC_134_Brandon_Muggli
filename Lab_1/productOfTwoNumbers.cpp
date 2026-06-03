/*
@author:Brandon Muggli
@date: 06/02/2026
@purpose: This program multiplies two integers and prints the result to the console
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    int num1=5;
    int num2=10;
    int product = num1 * num2;
    cout<<"the product of " <<num1<< " and " <<num2<< " is " <<product<< endl;
    return 0;
}