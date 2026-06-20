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

    // create the character variable 
    char letter;

    // capture a character and store it in the variable (letter)
    cout<<"Please enter a letter: "; 
    cin>> letter;

    // use an if statement combined with the OR operator (||) containing uppercase and lowercase vowels to output the desired message
    if (letter == 'a' || letter == 'A' || 
        letter == 'e' || letter == 'E' ||
        letter == 'i' || letter == 'I' ||
        letter == 'o' || letter == 'O' ||
        letter == 'u' || letter == 'U' ||
        letter == 'y' || letter == 'Y' )
        {cout<<"The letter is a vowel";}

    // use an if-else statement combined with the OR operator (||) containing uppercase and lowercase consonants to output the desired message
    else if (letter == 'b' || letter == 'B' ||
             letter == 'c' || letter == 'C' ||
             letter == 'd' || letter == 'D' ||
             letter == 'f' || letter == 'F' ||
             letter == 'g' || letter == 'G' ||
             letter == 'h' || letter == 'H' ||
             letter == 'j' || letter == 'J' ||
             letter == 'k' || letter == 'K' ||
             letter == 'l' || letter == 'L' ||
             letter == 'm' || letter == 'M' ||
             letter == 'n' || letter == 'N' ||
             letter == 'p' || letter == 'P' ||
             letter == 'q' || letter == 'Q' ||
             letter == 'r' || letter == 'R' ||
             letter == 's' || letter == 'S' ||
             letter == 't' || letter == 'T' ||
             letter == 'v' || letter == 'V' ||
             letter == 'w' || letter == 'W' ||
             letter == 'x' || letter == 'X' ||
             letter == 'z' || letter == 'Z')
            {cout<<"The letter is a consonant";}
      
    // use an else statement to display desired message for invalid characters
    else cout<<"Invalid input";
    
    return 0;
}
