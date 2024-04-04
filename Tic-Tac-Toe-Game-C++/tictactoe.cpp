//
//  tictactoe.cpp
//  Tic-Tac-Toe-Game-C++
//
//  Created by MEDLAO on 01/04/2024.
//

#include <iostream>
#include "tictactoe.hpp"
// globally defined
using namespace std;
string board[9] = {"", "", "", "", "", "", "", "", ""};
int player = 1;
int position = 0;

void introduction()
{
    cout << "Press [Enter] to begin: ";
    getchar(); // haults the screen
    cout << "\n";
    
    cout << "***********\n";
    cout << "Tic-Tac-Toe\n";
    cout << "***********\n";
    
    cout << "Player 1)  X\n";
    cout << "Player 2)  O\n\n";
    
    cout << "The 3x3 grid is shown below:\n\n";
    
    cout << "     |     |      \n";
    cout << "  1  |  2  |  3   \n";
    cout << "_____|_____|______\n";
    cout << "     |     |      \n";
    cout << "  4  |  5  |  6   \n";
    cout << "_____|_____|______\n";
    cout << "     |     |      \n";
    cout << "  7  |  8  |  9   \n";
    cout << "     |     |      \n\n";
    
}

bool is_winner()
{
    bool winner = false;
    // checking the rows
    if ((board[0] == board[1]) && (board[1] == board[2]) && board[0] != " ")
    {
        winner = true;
    }
    else if ((board[3] == board[4]) && (board[4] == board[5]) && board[3] != " ")
    {
        winner = true;
    }
    else if ((board[6] == board[7]) && (board[7] == board[8]) && board[6] != " ")
    {
        winner = true;
    }
    // checking the columns
    else if ((board[0] == board[3]) && (board[3] == board[6]) && board[0] != " ")
    {
        winner = true;
    }
    else if ((board[1] == board[4]) && (board[4] == board[7]) && board[1] != " ")
    {
        winner = true;
    }
    else if ((board[2] == board[5]) && (board[5] == board[8]) && board[2] != " ")
    {
        winner = true;
    }
    // checking the diagonals
    else if ((board[0] == board[4]) && (board[4] == board[8]) && board[0] != " ")
    {
        winner = true;
    }
    else if ((board[2] == board[4]) && (board[4] == board[6]) && board[2] != " ")
    {
        winner = true;
    }
    
    return winner;
}
