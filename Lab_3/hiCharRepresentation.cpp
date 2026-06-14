/*
@author: Brandon Muggli
@date: 06/13/26
@purpose: this program prints Hi! to the console using character representations instead of using a literal string
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    // define the characters
    char lett1, lett2, lett3;

    // an ascii table was used to find these characters
    lett1 = char(72);
    lett2 = char(105);
    lett3 = char(33);

    // print the combination of characters to the console
    cout<<lett1<<lett2<<lett3;

    return 0;
}