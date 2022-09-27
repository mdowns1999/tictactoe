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


class Game
{
private:
   /*These Variables are the characters we will use to play the game.*/
   int playerMove = 0;
   char BLANK = '-';
   Board b;

public:

   /*These methods will control the main parts of the game.*/
   void playGame();
   bool makeMove();
   void markMove();
   bool isWinner();
   bool isXTurn();
   bool isValid(const int playerMove);


};

