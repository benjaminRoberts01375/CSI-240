/**
@file functions.cpp
@brief setup arrays, and call functions to organize programming languages into list.
@author Ben Roberts
@credits Murat K . Gungor & Brian R. Hall
@assignment Lab 1.2a - 2D Array
@date 12/20/2020
*/


#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "functions.h"

using namespace std;

int loadLanguages( const string& filename, string names[], int maxLanguages )
{
    int numNames = 0;
   
    ifstream input(filename);
    if( input.is_open() )
    {
        while( !input.eof() && numNames < maxLanguages )
        {
            getline( input, names[numNames] );
            numNames++;
        }
        
        input.close();
    }
    return numNames;
}


bool loadInfo( const string& filename, int infoArray[][INFO], int numLanguages )
{
    bool worked = true;
    ifstream fin(filename);
    unsigned short int rank = 0;
    unsigned short int year = 0;
      
    if (fin.is_open()){
        for (int i = 0; !fin.eof() && i<numLanguages; i++){
            fin >> rank;
            infoArray[i][0] = rank;
            fin >> year;
            infoArray[i][1] = year;
        }
    }
    else{
        worked = false;
    }
    
    fin.close();
   
   return worked;
}


string formatReportLine( int languageRank, int infoArray[][INFO], string names[] )
{
    stringstream combination;
    
    combination << setw(17) << left << names[languageRank] << setw(10) << infoArray[languageRank][0] << infoArray[languageRank][0];
   
   return combination.str();
}
