/*
@author: Brandon Muggli
@date: 07/22/26
@purpose: This program allows two people to play a game of tic-tac-toe
*/

// include the iostream library for input/output
#include <iostream>
#include <string>
// use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){

    // initialize variables for later use (these variables were created as needed, rather than at the start of the program)
    string player1 = "X";
    string player2 = "O";
    bool gameStatus = false; // gameStatus allows the game to continue or end, false continues the game and true ends the game
    int playerRow = 0;
    int playerCol = 0;
    int playerTurn = 0;

    // initialize a 2-dimensional character array to hold game values
    string board[3][3]
    {"R0,C0","R0,C1","R0,C2","R1,C0","R1,C1","R1,C2","R2,C0","R2,C1","R2,C2"};

    // display the tic-tac-toe board with a welcome message
    cout<<"Welcome to Tic-Tac-Toe" <<endl;
    cout<<"\n";
    cout<<"\t" <<board[0][0] <<"\t" <<"|" <<"\t" <<board[0][1] <<"\t" <<"|" <<"\t" <<board[0][2] <<endl;
    cout<<"-------------------------------------------------" <<endl;
    cout<<"\t" <<board[1][0] <<"\t" <<"|" <<"\t" <<board[1][1] <<"\t" <<"|" <<"\t" <<board[1][2] <<endl;
    cout<<"-------------------------------------------------" <<endl;
    cout<<"\t" <<board[2][0] <<"\t" <<"|" <<"\t" <<board[2][1] <<"\t" <<"|" <<"\t" <<board[2][2] <<endl;

    // use a while-loop to keep the game running until a player wins or a draw is reached
    while (!gameStatus)
    {

        cout<<"\n" <<playerTurn <<endl;

        if(playerTurn == 9)
        {
            cout<<"The game has ended in a draw!" <<endl;
            gameStatus = true;
        }

        // use the modulo operator (%) to determine the correct portion of code to execute
        if (playerTurn % 2 == 0)                                         // if the remainder of (playerTurn) is 0 when divided by 2, execute the code inside the brackets
        {
            // prompt player 1 for an available spot on the board
            cout<<"Player 1, choose your row and collumn:";
            cin>> playerRow;
            cin>> playerCol;

            // use a while statement to prevent player 1 from taking an occupied space and prompt the user for another entry
            while(board[playerRow][playerCol] == player2)
            {
                cout<<"Invalid input, please select another position";   // outputs the invalid input message to the console
                cin>> playerRow;                                         // collects user data and stores it in the variable (playerRow)
                cin>> playerCol;                                         // collects user data and stores it in the variable (playerCol)
            }

            // use an if statement to store user data in the 2d board array
            if (board[playerRow][playerCol] != player2)                  // "if the spot selected by player 1 does not have (player2)'s data, set the user selected index to (player1)""
            {
                board[playerRow][playerCol] = player1;
            }

            // display the current board game to the console
            cout<<"\t" <<board[0][0] <<"\t" <<"|" <<"\t" <<board[0][1] <<"\t" <<"|" <<"\t" <<board[0][2] <<endl;
            cout<<"-------------------------------------------------" <<endl;
            cout<<"\t" <<board[1][0] <<"\t" <<"|" <<"\t" <<board[1][1] <<"\t" <<"|" <<"\t" <<board[1][2] <<endl;
            cout<<"-------------------------------------------------" <<endl;
            cout<<"\t" <<board[2][0] <<"\t" <<"|" <<"\t" <<board[2][1] <<"\t" <<"|" <<"\t" <<board[2][2] <<endl;

            // use if statements to output player 1 win message when conditions are met
            if (board[0][0] == player1 && board[0][1] == player1 && board[0][2] == player1 ||
                board[1][0] == player1 && board[1][1] == player1 && board[1][2] == player1 ||
                board[2][0] == player1 && board[2][1] == player1 && board[2][2] == player1 ||  
                board[0][0] == player1 && board[1][1] == player1 && board[2][2] == player1 ||
                board[0][2] == player1 && board[1][1] == player1 && board[2][0] == player1   )
                {
                    cout<<"Player 1 has won the game!" <<endl;
                    gameStatus = true;
                    //return 0;
                }
            
        }

        //// use the modulo operator (%) to determine the correct portion of code to execute
        if (playerTurn % 2 != 0)
        {
            // prompt player 2 for an available spot on the board
            cout<<"Player 2, choose your row and collumn:";
            cin>> playerRow;
            cin>> playerCol;

            // use a while statement to prevent player 2 from taking an occupied space and prompt the user for another entry
            while(board[playerRow][playerCol] == player1)
            {
                cout<<"Invalid Input, please select another position";   // outputs the invalid input message to the console
                cin>> playerRow;                                         // collects user data and stores it in the variable (playerRow)
                cin>> playerCol;                                         // collects user data and stores it in the variable (playerCol)
            }

            // use an if statement to store user data in the 2d board array
            if (board[playerRow][playerCol] != player1)                  // "if the spot selected by player 1 does not have (player2)'s data, set the user selected index to (player1)"
            {
                board[playerRow][playerCol] = player2;
            }

            // display the board game to the console
            cout<<"\t" <<board[0][0] <<"\t" <<"|" <<"\t" <<board[0][1] <<"\t" <<"|" <<"\t" <<board[0][2] <<endl;
            cout<<"-------------------------------------------------" <<endl;
            cout<<"\t" <<board[1][0] <<"\t" <<"|" <<"\t" <<board[1][1] <<"\t" <<"|" <<"\t" <<board[1][2] <<endl;
            cout<<"-------------------------------------------------" <<endl;
            cout<<"\t" <<board[2][0] <<"\t" <<"|" <<"\t" <<board[2][1] <<"\t" <<"|" <<"\t" <<board[2][2] <<endl;

            // use if statements to output player 1 win message when conditions are met
            if (board[0][0] == player2 && board[0][1] == player2 && board[0][2] == player2 ||
                board[1][0] == player2 && board[1][1] == player2 && board[1][2] == player2 ||
                board[2][0] == player2 && board[2][1] == player2 && board[2][2] == player2 ||  
                board[0][0] == player2 && board[1][1] == player2 && board[2][2] == player2 ||
                board[0][2] == player2 && board[1][1] == player2 && board[2][0] == player2   )
                {
                    cout<<"Player 2 has won the game!" <<endl;
                    gameStatus = true;
                    //return 0;
                }
        }

        // increment (playerTurn) to switch between players
        playerTurn++;

    }

    // output end of game message
    cout<<"Thank you for playing" <<endl;

}

