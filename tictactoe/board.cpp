/***********************************************************************
 * File:
 *    Board: Handles anything related to the board.
 * Author:
 *    Mike Downs
 * Summary:
 *    This class will handle updating and displaying the board.  It will
 *  also save and load the board for different games.
 *
 ************************************************************************/

#include "board.h"

/******************************************
*DISPLAY BOARD
* 
* Display the Tic Tac toe Board
*******************************************/
void Board::displayBoard()
{
   cout << "\n " << board[0] << " | " << board[1] << " | " << board[2] << endl;
   cout << "---+---+---"   << endl;
   cout << ' ' << board[3]   << " | " << board[4] << " | " << board[5] << endl;
   cout << "---+---+---"   << endl;
   cout << ' ' << board[6]   << " | " << board[7] << " | " << board[8] << endl;
}

/******************************************
*UPDATE BOARD
*
* Update the Tic Tac toe Board
*******************************************/
void Board::updateBoard(int move, bool xTurn)
{
   if(xTurn)
      board[move - 1] = X;
   else
      board[move - 1] = O;
}

/******************************************
*SAVE BOARD
*
* Save the Tic Tac toe Board to a file
*******************************************/
void Board::saveBoard()
{
 // Open the file.
 fout.open(fileName);
 if (fin.fail())
    return;

 // For each value from the file.
 for (auto num : board)
 {
    // Write to the file
    fout << num << "\n";
 }

 // Close file!
 fin.close();
}

/******************************************
*LOAD BOARD
*
* Load the Tic Tac toe Board to a file
*******************************************/
void Board::loadBoard()
{
   char value;

   fin.open(fileName);

   // Read all the data.
   if (!fin.fail())
   {
      int i = 0;
      while (i != 9)
      {
         fin >> value;
         board[i] = value;
         i++;
      }

   }

   // Close file
   fin.close();
}


