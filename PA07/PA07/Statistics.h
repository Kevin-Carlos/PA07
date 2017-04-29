// Class Header File ///////////////////////////////////////////////////////////
/**
  * @file Statistics.h
  *
  * @details Class definition of Statistics 
  *
  * @version 1.00
  *          Kevin Carlos (28 April 2017)
  *
  * @return none
  *
  * @notes This class inherits the Game class
*/

// Header Files ////////////////////////////////////////////////////////////////
#include "Game.h"

// Processor Directives ////////////////////////////////////////////////////////
#ifndef _STATISTICS
#define _STATISTICS

class Statistics : public Game
{
   int Games;
   int Won;
   int Win_Rate;
   int Games_Played;
   float Fastest_Win;
   int Fewest_Moves;
   float Top_Score;
};
#endif