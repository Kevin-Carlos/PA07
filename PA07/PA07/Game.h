// Class Header File ///////////////////////////////////////////////////////////
/**
* @file Game.h
*
* @details Class definition of Game
*
* @version 1.00
*          Kevin Carlos (28 April 2017)
*
* @return none
*
* @notes This class inherits the Player class
*/

#include "Player.h"

#ifndef _GAME
#define _GAME

class Game : public Player
{
   int suits;
};
#endif