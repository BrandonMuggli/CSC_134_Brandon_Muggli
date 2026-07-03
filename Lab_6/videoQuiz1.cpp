/*
@author: Jad Talbert
@date: 07/03/26
@purpose: This program collects a number of test scores (determined by the user after each entry), and displays the number of scores entered, the number of passing scores entered,
          and the average of all test scores 
*/

// include the iostream library for input output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main()
{

    // initializing variables to be used in following statements
    int score;                    // this variable collects a score entered by the user 
    int count = 0;                // this counter keeps track of how many while-loops run (used to calculate the average of the test scores)
    int passingScores = 0;        // this variable stores the number of passing scores entered by the user
    float total = 0.0f;           // this variable stores the total sum of each score entered by the user
    bool continueEntering = true; // enables the while-loop to execute again if the user enters a 1, or teminates if the user enters zero through the use of a boolean value

    // this while statement will continue to run as long as (continueEntering) = true
    while (continueEntering)
    {
        // collect a test score and store it in the variable (score)
        cout << "Enter a test score (0 - 100): ";
        cin >> score;
        
        total += score;           // increments (total) by (score) using the custom increment operator (+=)
        count++;                  // increments (count) using the standard increment operator (++) in postfix mode

        // if the score entered by the user is above 70, (passingScores) will be incremented using the standard increment operator (++) in postfix mode
        if (score >= 70)
        {
            passingScores++;
        }

        // ask the user if they would like to enter another score and store the answer in the variable (continueEntering)
        // this works by setting the boolean value for (continueEntering)
        cout << "Enter another score? (1 for true, 0 for false): ";
        cin >> continueEntering;
    }

    // initialize a floating point variable to store the average of all test scores entered by the user
    float average = 0.0f;

    // if the counter variable (count) is greater than zero, perform the average test score calculation
    if (count > 0)
    {
        average = total / count;  // divides the total sum of scores (total) by the number of scores entered (count) and stores the result in the variable (average)
    }

    // creating the "results" heading using cout
    cout << "\nResults" << endl;  
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;         // displays the total number of scores entered by the user on its own line
    cout << "Passing Scores: " << passingScores << endl; // displays the number of passing scores entered by the user on its own line
    cout << "Average Score: " << average << endl;        // displays the average of all test scores entered by the user on its own line

    // creates a boolean variable (classPassed) that takes on a true/false value depending on if the average is greater than or equal to 70.0f
    // if (average) is >= to 70.0f, (classPassed) will have a value of true (1). 
    // if (average) is not >= to 70.0f, (classPassed) will have a value of false (0).
    bool classPassed = average >= 70.0f;
    cout << "Class Average Passing: " << classPassed << endl; // outputs the boolean value of (classPassed) to the console

    // ends the program
    return 0;
}