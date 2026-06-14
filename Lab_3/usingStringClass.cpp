/*
@author: Brandon Muggli
@date: 06/14/26
@purpose: This program uses the c++ string class to print "Today i am 25 years old!" to the console
*/

// include the iostream library for input/output
#include <iostream>
// include the string header file to enable string "variables"
#include <string>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // define the string variables
    string verbiage, age, verbiage_end;

    // assign string literals to the string variables (verbiage), (age), (verbiage_end)
    verbiage = "Today I am ";
    age = "25 ";
    verbiage_end = "years old!";

    // put the string variables together and print them to the console
    cout <<verbiage <<age <<verbiage_end;

    return 0;
}
