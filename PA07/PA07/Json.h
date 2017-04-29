// Class Definition File ///////////////////////////////////////////////////////
/**
  * @file Json.h
  *
  * @details Class definition for my JSONizer
  *
  * @version 1.00
  *          Kevin Carlos (28 April 2017)
  *          Initial development
  *
  * @notes none
  *
*/

// Header Files ////////////////////////////////////////////////////////////////
#include <string>

// Processor Directives ////////////////////////////////////////////////////////
#ifndef _JSON
#define _JSON

class Json
{
public:
   //Parser
   void parse ( std::string fileName );
};
#endif