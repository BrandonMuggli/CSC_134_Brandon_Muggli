#include <iostream>

using namespace std;

// Function prototypes
void displayBoard(const char board[3][3]);
bool makeMove(char board[3][3], int position, char player);
bool checkWin(const char board[3][3], char player);
bool checkDraw(const char board[3][3]);

int main() {
    // 1. Initialize the board with reference numbers 1-9
    char board[3][3] =
    {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    char currentPlayer = 'X';
    bool gameOver = false;
    int choice;

    cout << "--- Welcome to Tic-Tac-Toe! ---\n";

    // 2. Main Game Loop
    while (!gameOver)
    {
        displayBoard(board);
        cout << "Player " << currentPlayer << ", enter a position (1-9): ";
        cin >> choice;

        // Process and validate move
        if (makeMove(board, choice, currentPlayer))
        {
            // Check for endgame states
            if (checkWin(board, currentPlayer))
            {
                displayBoard(board);
                cout << "Congratulations! Player " << currentPlayer << " wins!\n";
                gameOver = true;
            }
            else if (checkDraw(board))
            {
                displayBoard(board);
                cout << "It's a draw!\n";
                gameOver = true;
            }
            else
            {
                // Switch turn: toggle between 'X' and 'O'
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }
        else
        {
            cout << "Invalid move! The slot is taken or out of range. Try again.\n";
        }
    }
    return 0;
}

// 3. Render the 3x3 layout to the terminal
void displayBoard(const char board[3][3])
{
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " \n";
        if (i < 2)
        {
            cout << "---|---|---\n";
        }
    }
    cout << "\n";
}

// 4. Map the 1-9 choice into 2D grid coordinates and update it
bool makeMove(char board[3][3], int position, char player)
{
    if (position < 1 || position > 9) return false;

    // Convert flat position (1-9) to 2D indices (0-2)
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;

    // Validate if space is occupied by an actual mark
    if (board[row][col] == 'X' || board[row][col] == 'O')
    {
        return false; 
    }

    board[row][col] = player;
    return true;
}

// 5. Evaluate rows, columns, and diagonals for a win
bool checkWin(const char board[3][3], char player)
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;

    return false;
}

// 6. Check for a full grid if no one has won
bool checkDraw(const char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // If any cell still holds its numeric label, grid is not full
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }
    return true;
}