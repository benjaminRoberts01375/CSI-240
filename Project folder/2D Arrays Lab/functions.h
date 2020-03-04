/**
@file functions.h meeeee
@brief setup arrays, and call functions to organize programming languages into list.
@author Ben Roberts
@credits Murat K . Gungor & Brian R. Hall
@assignment Lab 1.2a - 2D Array
@date 12/20/2020
*/

#ifndef __lab1__functions__
#define __lab1__functions__

#include <string>

using namespace std;

const int INFO = 2;

//load language names from a file into the names array - return number of languages read
int loadLanguages( const string& filename, string names[], int maxLanguages );

//load language info from a file into a 2d array of ints, return true if successfully processed
bool loadInfo( const string& filename, int infoArray[][INFO], int numLanguages );

//formats and returns a string which contains the language name and the info for
//a particular language (indicated by languageRank)
string formatReportLine( int languageRank, int infoArray[][INFO], string names[] );

#endif /* defined(__lab1__functions__) */
