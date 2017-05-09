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
   int            intData;

   //Open the given file
   fin.open ( fileName );

   //Validate file opening
   if ( !fin.is_open ( ) )
   {
      std::cout << "Error opening the given file; exiting...\n";
      exit ( 1 );
   }

   //Read the file in
   //Find the key
   getline ( fin , garbage );
   getline ( fin , garbage );
   getline ( fin , garbage , ' ' );
   getline ( fin , garbage , ' ' );
   getline ( fin , garbage , ' ' );
   getline ( fin , garbage , ' ' );
   getline ( fin , key , ':');
   getline ( fin , garbage , ' ' );
   getline ( fin , stringData , ',' );
   stringMap [ key ] = stringData;
   getline ( fin , garbage , '{' );
   fin >> key;
   key.pop_back ( );
   fin >> stringData;
   stringData.pop_back ( );
   intData = stoi ( stringData );
   dataMap [ key ] = intData;
   fin >> key;
   key.pop_back ( );
   fin >> stringData;
   stringData.pop_back ( );
   intData = stoi ( stringData );
   dataMap [ key ] = intData;

   std::cout << "Key: " << key << "\n";
   std::cout << "Data: " << stringData << "\n";
   std::cout << "intData: " << intData << "\n";
      

}

