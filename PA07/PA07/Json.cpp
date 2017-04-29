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

#include "Json.h"

void Json::parse ( std::string fileName )
{
   //Variables
   std::ifstream fin;
   std::string string;

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
      //Find the first bracket
      fin >> string;
      while ( string != "{" )
      {
         fin >> string;
      }

      getline ( fin , string , '}' );
      std::cout << string << std::endl;
   }

}

