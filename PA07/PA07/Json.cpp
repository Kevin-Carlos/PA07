// Class Implementation File ///////////////////////////////////////////////////
/**
  * @file Json.cpp
  *
  * @details Class implementation file
  *
  * @version 1.00
  *          Kevin Carlos (28 April 2017)
  *          Initial development
  *
  * @notes none
  *
*/

// Header Files ////////////////////////////////////////////////////////////////
#include <iostream>
#include <fstream>
#include <map>

#include "Json.h"

void Json::parse ( std::string fileName )
{
   //Variables
   std::ifstream fin;
   std::string string;
   std::string key;
   std::string data;
   std::map < std::string , std::string > stringMap;
   std::map < std::string , int > dataMap;

   //Open the given file
   fin.open ( fileName );

   //Validate file opening
   if ( !fin.is_open ( ) )
   {
      std::cout << "Error opening the given file; exiting...\n";
      exit ( 1 );
   }

   //Read the file in
   while ( !fin.eof ( ) )
   {
      //Find the key
      getline ( fin , string , '"' );
      key = string;
      std::cout << "Key: " << key << std::endl;
   }

}

