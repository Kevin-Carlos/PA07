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
#include <stdlib.h>

#include "Json.h"

void Json::parse ( std::string fileName )
{
   //Variables
   std::ifstream  fin;
   std::string    garbage;
   std::string    key;
   std::string    stringData;
   std::map       < std::string , std::string > stringMap;
   std::map       < std::string , int > dataMap;

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
      getline ( fin , garbage );
      getline ( fin , garbage );
      getline ( fin , key , ':');
      getline ( fin , garbage , ' ' );
      getline ( fin , stringData , ',' );
      stringMap [ key ] = stringData;

      std::cout << "Key: " << key << "\n";
      std::cout << "Data: " << stringData << "\n";
      
   }

}

