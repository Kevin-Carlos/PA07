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
#include <map>

// Processor Directives ////////////////////////////////////////////////////////
#ifndef _JSON
#define _JSON

class Json
{
public:
   std::map       < std::string , std::string > stringMap;
   std::map       < std::string , int > dataMap;

   //Parser
   void parse ( std::string fileName );
};
#endif