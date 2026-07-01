/*
@author: Brandon Muggli
@date: 06/30/26
@purpose: This program uses a for-loop to simulate rolling a die a user-specified number of times
*/

// include the iostream library for input/output
// include cstd library for the random number generator
// include ctime for the random number generator
#include <iostream>
#include <cstdlib>
#include <ctime>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // create a variable for the number of rolls
    int roll = 0;

    // create a variable to store the generated number
    int RanNum = 0;

    // collect a number from the user
    cout<<"Please enter the number of times you would like to roll the die: ";
    cin>>roll;

    // create a for loop to roll the die (roll) times
    for (int ver = 0; ver < roll; ver++)
    {
        RanNum = (rand() % 6) +1; // use the modulus operator (%) to set the bounds for the random number generator up to 6
                                  // the (+1) sets the lower boun of the number generator to 1

        cout<<"Roll number " <<ver +1 <<" is "<<RanNum <<endl; // output the current iterations roll value to the console on a new line
    }

    // output the final number generated to the console
    cout<<"Your final roll is: " <<RanNum;

    return 0;
}