/*
@author: Brandon Muggli
@date: 07/10/26
@purpose: This program keeps track of your score while playing golf
*/

// include the iostream library for input/output
#include <iostream>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    //initialize variables
    int courseRate = 0;
    int score = 0;
    int totalScore = 0;

    // capture a course rating and store it in the variable (courseRate)
    cout<<"Please Enter The Course Rating: ";
    cin>>courseRate;

    // use a FOR loop to collect and display scores
    for (int tee = 1; tee <= 18; tee++)
    {
        cout<<"What is your score for hole " <<tee <<": ";
        cin>>score;
        totalScore += score;
        cout<<"\n";

        cout<<"#####################" <<endl;
        cout<<"Par Of The Course: " <<courseRate <<endl;
        cout<<"Your Score So Far: " <<totalScore <<endl;
        cout<<"#####################" <<"\n" <<endl;
    }

    // display final score message to the console
    cout<<"Your Final Score For This Round Is: " <<totalScore;
    cout<<"\n\n";

    return 0;
}