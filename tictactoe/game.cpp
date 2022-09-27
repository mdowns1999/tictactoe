/***********************************************************************
 * File:
 *    Game: Control the playing of the game.
 * Author:
 *    Mike Downs
 * Summary:
 *    This class will control how the game is played.  It will keep track
 * of the turns, if a player has won, and if input from the user is valid.
 *
 ************************************************************************/

#include "game.h"

/******************************************
* PLAY GAME
*
* This method controls the run of the game
*******************************************/
void Game::playGame()
{
   cout << "Welcome to Tic Tac Toe!  " << endl;
   cout << "\n 1 | 2 | 3 "
      << "\n---+---+---"
      << "\n 4 | 5 | 6 "
      << "\n---+---+---"
      << "\n 7 | 8 | 9 "
      << endl;

   int newGame;
   cout << "If you started a previous game.  Type in -2. If not, type 1." << endl;
   cin >> newGame;

   if (newGame == -2)
   {
      b.loadBoard();

      //Display current board
      b.displayBoard();
   }

   bool done = false;

   while (!done)
   {
      //Check for a winner
      done = isWinner();

      if (done)
         break;

      bool moveMade = makeMove();

      if (moveMade == false)
      {
         b.saveBoard();
         done = true;
      }

      //Display current board
      b.displayBoard();
   }
   
}

/******************************************
* IS X TURN
*
* Determines whose turn it is
*******************************************/
bool Game::isXTurn()
{

   int size = b.getBoardSize();

   int xSize = count(b.board, b.board + size, 'X');
   int oSize = count(b.board, b.board + size, 'O');

   if (oSize < xSize)
      return false;
   else
      return true;
}

/******************************************
* IS VALID
*
* Checks if the input is valid
*******************************************/
bool Game::isValid(const int playerMove)
{
   //try
   //{
   //   cout<< "True or False: " << isdigit(playerMove) << endl;

   //   if (sizeof(playerMove) == sizeof(int))
   //   {
   //      if (b.board[playerMove - 1] != BLANK)
   //      {
   //         cout << "Move is invalid.  Player: " << b.board[playerMove - 1]
   //            << " is in that spot!" << endl;
   //         return false;
   //      };
   //      return true;
   //   }
   //}
   //catch (...)
   //{
   //   cout << "Invalid character!  Please enter a value between 1 and 9!" << endl;
   //}

   if (b.board[playerMove - 1] != BLANK)
      {
         cout << "Move is invalid.  Player: " << b.board[playerMove - 1]
              << " is in that spot!" << endl;
          return false;
      };

   return true;
}

/******************************************
* IS WINNER
*
* Checks for a winner
*******************************************/
bool Game::isWinner()
{
   //Check if match in rows
   for (int row = 0; row < 3; row++)
   {
      if (b.board[row * 3] != BLANK and b.board[row * 3] == b.board[row * 3 + 1] and b.board[row * 3] == b.board[row * 3 + 2])
      {
         cout << b.board[row * 3] << " Won the Game!" << endl;
         return true;
      }
   }
   
   //Check if match in columns
   for (int col = 0;col < 3; col++)
   {
      if (b.board[col] != BLANK and b.board[col] == b.board[3 + col] and b.board[col] == b.board[6 + col])
         {
            cout << b.board[col] << " Won the Game!" << endl;
            return true;
         }
   }

   //Check if match diagonally
   if (b.board[4] != BLANK and (b.board[0] == b.board[4] and b.board[0] == b.board[8] or
      b.board[2] == b.board[4] and b.board[2] == b.board[6]))
      {
         cout << b.board[4] << " Won the Game!" << endl;
         return true;
      }

   //Check for Tie
   bool tie = true;
   for (int square = 0; square < b.getBoardSize(); square++)
   {
      if (b.board[square] == BLANK)
      {
         tie = false;
      }
   }
   if (tie)
   {
      cout << "The Game is a Tie!" << endl;
      return true;
   }

   return false;
}

/******************************************
* MAKE MOVE
*
* Allows player to make a move
*******************************************/
bool Game::makeMove()
{
   bool valid = false;

   while (!valid)
   {
      cout << "Choose a Square to Move to: " << endl;
      cin >> playerMove;

      //If the player is saving the board, if not continue as normal
      if (playerMove == -1)
         return false;

      //Check if the move is valid.
      valid = isValid(playerMove);

   }

   //Mark the move down
   markMove();

   return true;

}

/******************************************
* MARK MOVE
*
* Marks the move on the board
*******************************************/
void Game::markMove()
{
   //Make sure we are marking the right symbol
   bool xTurn = isXTurn();

   //Update the board
   b.updateBoard(playerMove, xTurn);
}