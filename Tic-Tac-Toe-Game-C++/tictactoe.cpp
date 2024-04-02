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
    cout << "Player 2)  O\n";
    
    cout << "The 3x3 grid is shown below:\n\n";
    
}
