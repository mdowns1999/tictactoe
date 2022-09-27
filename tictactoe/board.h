/***********************************************************************
 * Header File:
 *    Board: Handles anything related to the board.
 * Author:
 *    Mike Downs
 * Summary:
 *    This class will handle updating and displaying the board.  It will
 *  also save and load the board for different games.
 *
 ************************************************************************/

#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Board
{
private:
   char X = 'X';
   char O = 'O';
   string fileName = "board.txt";



public:
   // For the opening and writing of files
   std::ifstream fin;
   std::ofstream fout;

   //Set up a default board.
   char board[9] = {'-','-','-','-','-','-','-','-','-' };

   //Display or update the board.
   void displayBoard();
   void updateBoard(int move, bool xTurn);

   //Get size of board because if we pass the array we cannot look up the size
   int getBoardSize() { return sizeof(board) / sizeof(char); };

   //Save and load game methods
   void saveBoard();
   void loadBoard();

};

