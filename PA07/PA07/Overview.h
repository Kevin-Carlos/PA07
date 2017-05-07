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
#ifndef _OVERVIEW
#define _OVERVIEW

class Overview : public Game
{
   int Games;
   int Won;
   int Win_Rate;
   int Games_Played;
   int Fastest_Win;
   int Fewest_Moves;
   int Top_Score;
};
#endif