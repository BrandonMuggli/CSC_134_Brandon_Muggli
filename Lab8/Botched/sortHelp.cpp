/*
@author: Brandon Muggli
@date: 07/15/26
@purpose: This program lists the days of the week
*/

// include the iostream library for input/output and string for the string array
#include <iostream>
#include <string>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

     const int TOTAL_SIZE = 10;
    int numbers[TOTAL_SIZE] = {10,90,2,25,44,88,0,4};

    for (int n=0; n<TOTAL_SIZE-1;++n)
    {
        for (int y=0; y < TOTAL_SIZE-n-1;++y)
        {
            if (numbers[y] > numbers[y+1])
            {
                int holdThis = numbers[y];
                numbers[y] = numbers[y+1];
                numbers[y+1] = holdThis;
            }
        }
    }

    for (int n=0;n<TOTAL_SIZE;++n)
    {
        cout << numbers[n] << endl;
    }
    return 0;
}