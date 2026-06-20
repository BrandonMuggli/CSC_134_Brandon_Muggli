/*
@author: Brandon Muggli
@date: 06/17/26
@purpose: This program collects a letter (either uppercase or lowercase) and determines if it is a vowel or consonant
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

// create uppercase character variable
char letter;

// capture an uppercase or lowercase letter
cout<<"Please enter a letter: ";
cin>> letter;

if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'Y')
{cout<<"The letter " <<letter <<" is a vowel!";}

else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y')
{cout<<"The letter " <<letter <<" is a vowel!";}

else if (letter != 'A' || letter != 'E' || letter != 'I' || letter != 'O' || letter != 'U' || letter != 'Y' ||
    letter != 'a' || letter != 'e' || letter != 'i' || letter != 'o' || letter != 'u' || letter != 'y')
{if (letter != 0 || letter != 1 || letter != 3)
    {cout<<"This is an invalid input";}
}
else {cout<<"The letter " <<letter <<" is a consonant";}

return 0;
}
