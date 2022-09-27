/***********************************************************************
 * Header File:
 *    Game: Control the playing of the game.
 * Author:
 *    Mike Downs
 * Summary:
 *    This class will control how the game is played.  It will keep track 
 * of the turns, if a player has won, and if input from the user is valid.
 * 
 ************************************************************************/


#pragma once
#include "board.h";
#include <sstream> // This will allow us to convert strings into ints in the program


class Game
{
private:
   /*These Variables are the characters we will use to play the game.*/
   int playerMove = 0;
   string move;
   stringstream toString;
   char BLANK = '-';
   Board b;

public:

   /*These methods will control the main parts of the game.*/
   void playGame();
   bool makeMove();
   void markMove();
   bool isWinner();
   bool isXTurn();
   bool isValid(int &playerMove);
};

