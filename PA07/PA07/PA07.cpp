// Driver File Implementation //////////////////////////////////////////////////
/**
  * @file PA07.cpp
  *
  * @projectDetails Load game statistics and be able to save game statistics
  *					in a compact, compressible storage format -- JSON
  *
  * @version 1.00
  *		   Kevin Carlos (24 April 2017)
  *		   Initial development begun
  *
  * @notes none
  *
 */

// Header Files ////////////////////////////////////////////////////////////////
#include <iostream>

#include "Json.h"
#include "Game.h"
#include "Player.h"
#include "Overview.h"

// Processor Directives ////////////////////////////////////////////////////////



// Main Function Implementation ////////////////////////////////////////////////
int main ( )
{
   //Variables
   Json obj;
   std::string fileName = "PlayerStatistics.json";

   obj.parse ( fileName );
	return 0;
}