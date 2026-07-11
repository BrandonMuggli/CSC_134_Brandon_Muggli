/*
@author: Brandon Muggli
@date: 06/30/26
@purpose: This program accepts a user-specified budget, propmts the user for expenses, and outputs the over/under expenses to the console
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    
    float totalBudget = 0.00;         // initialize variable to store the budget
    bool continueEntering = true;     // initialize a boolean value for "enter another expense" prompt
    float expense = 0.00;             // initialize a variable to store individual expenses
    float totalExpense = 0.00;        // initialize a variable to store the sum of each expense
    int count = 0;                    // initializes a count varible to track the number of expenses captured
    float remainBudget = 0.00;        // initializes a variable to store the remaining budget

    // capture a number and store it in the variable (totalBudget)
    cout<<"Please enter your monthly budget: ";
    cin>>totalBudget;

    // create a while loop to collect user-entered data
    while (continueEntering)
    {
        // capture a number and store it in the variable (expense)
        cout<<"Please enter an expense: ";
        cin>>expense;

        // use an IF statement to keep track of each expense
        if(expense > 0)
        {
            totalExpense += expense;       // increments (totalExpense) using the custom increment operator (+=) 
            count++;                       // increments (count) using the increment operator (++) in postfix mode
            remainBudget = totalBudget - expense;
            cout<<"#########################" <<endl;
            cout<<"Number Of Expenses: " <<count <<endl;
            cout<<"Expense Total So Far: " <<totalExpense <<endl;
            cout<<"Budget Remaining: " <<remainBudget <<endl;
            cout<<"#########################" <<endl <<"\n:";
            remainBudget -= (totalBudget - expense);
        }

        // ask the user if they would like to enter another expense
        cout<<"Would you like to enter another expense? (enter 1 for yes, 0 for no)";
        cin>>continueEntering;

    }
    
    // use an If statement to output desired message
    if (remainBudget >= 0)
    {
        cout<<"You are $" <<remainBudget <<" under budget";
    }

    // use an IF statement to output desired message
    if (remainBudget < 0)
    {
        remainBudget = remainBudget * (-1);
        cout<<"You are $" <<remainBudget <<" over budget";
    }

    return 0;
}
