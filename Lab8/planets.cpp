/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program lists out the planets in the solar system
*/

// include the iostream library for input/output and string for the string array
#include <iostream>
#include <string>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a conatant variable for use in the array
    const int numPlanet = 9;

    // initialize a string array to the value of (numPlanet)
    string planetArray[numPlanet];

    // store the proper string in each index
    planetArray[0] = "Mercury";
    planetArray[1] = "Venus";
    planetArray[2] = "Earth";
    planetArray[3] = "Mars";
    planetArray[4] = "Jupiter";
    planetArray[5] = "Saturn";
    planetArray[6] = "Uranus";
    planetArray[7] = "Neptune";
    planetArray[8] = "Pluto (the dwarf planet)";

    // output header message to the console
    cout<<"The 8 planets (and one dwarf planet) in out solar system are: " <<endl;

    // use a for-loop to output the list of planets to the console
    for (int count = 0; count < numPlanet; count++) // initialize counter variable (count) and increment it using (++) in postfix mode
    {
        cout<<planetArray[count] <<endl; 
    }

    return 0;
} 