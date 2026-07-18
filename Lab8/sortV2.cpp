/*
@author: Brandon Muggli
@date: 07/18/26
@purpose: This program takes an unorganized array, sorts it, and displays the sorted list in ascending order. 
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize a variable to hold the number of indicies in the array
    const int TOTAL_SIZE = 10;
    // initialize the array given by the lab
    int numbers[TOTAL_SIZE] = {10,90,2,25,44,88,0,4};

    // use an outer loop and inner loop to sort the array
    for (int out = 0; out < (TOTAL_SIZE - 1); out++)        // the outer loop tracks the number of loops made and outputs each iteration to the console
    {
        for (int in = 0; in < TOTAL_SIZE - out - 1; in++)   // the inner loop handles the bubble sorting algorithm
        {
            // use an IF statement to sort by comparing adjacent numbers
            // If the number in index z is higher than the number in index z+1, switch the positions of the two numbers
            if (numbers[in] > numbers[in + 1])
            {
                int placeholder = numbers[in];  // initialize a variable to temporarily store the number in index z
                numbers[in] = numbers[in + 1];  // moves the number in index z into index z+1
                numbers[in + 1] = placeholder;  // moves the number formerly in index z+1 into index z 
            }

        }

        // outputs each iteration of the bubble sort since it is located inside the outer for-loop
        cout<<"Pass " <<out+1 <<": ";
        for ( int count = 0; count < TOTAL_SIZE; count++)
        {
            cout<<numbers[count] <<" ";
        } 
        cout<<"\n";
    }
     
    //create space between the sort iterations and the final result
    cout<<"\n";

    // use the same for-loop from above to output the sorted array
    cout<<"The order of the array in ascending order is:" <<endl;
    for ( int count = 0; count < TOTAL_SIZE; count++)
    {
        cout<<numbers[count] <<" ";
    }

    return 0;
}