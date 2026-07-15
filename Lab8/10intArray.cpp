/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program uses an array to store user-entered values, and calculated the average of those values
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a constant variable to 10 for use in the array
    const int numElements = 10;

    // initialize variables for grade calculations
    float gradeTotal = 0.00;
    float gradeAvg = 0.00;

    // initialize an integer array to the value of (numElements)
    int gradeArray[numElements];

    // use a for-loop to ask for each grade
    for (int count = 0; count < numElements; count++) // initialize counter variable (count) to 0 and increment using (++) in postfix mode
    {
        cout<<"Enter integer grade " <<count +1 <<": "; // prompt the user for a value
        cin>>gradeArray[count];                         // store the entered grade in the proper array index
        gradeTotal += gradeArray[count];                // increment (gradeTotal) by (gradeArray[count]) using (+=)
    }

    // calculate the grade average and store it in the variable (gradeAvg)
    gradeAvg = gradeTotal / numElements;

    // output the grade average to the colsole
    cout<<"The average of all grades is: " <<gradeAvg <<"%";

    return 0;
}