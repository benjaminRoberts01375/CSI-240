/**
 @file main.cpp
 @brief setup arrays, and call functions to organize programming languages into list.
 @author Ben Roberts
 @credits Murat K . Gungor & Brian R. Ha
 @assignment Lab 1.2a - 2D Array
 @date 12/20/2020
 */

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include "functions.h"

using namespace std;

int main()
{
    const int MAX_LANGUAGES = 15;
    const string LANGUAGE_NAMES_FILE = "languages.txt";
    const string INFO_FILE = "info.txt";
   
    string names[MAX_LANGUAGES];
    int infoArray[MAX_LANGUAGES][INFO];
   
    int numLanguages = loadLanguages( LANGUAGE_NAMES_FILE, names, MAX_LANGUAGES );
   
    if( numLanguages > 0 )
    {
        bool infoLoaded = loadInfo( INFO_FILE, infoArray, numLanguages );
        if( infoLoaded )
        {
         cout << setw(15) << left << "Name: " << setw(10) << left << "| Rank:" << "| Year Released:" << endl;
         
         for( int i = 0; i < numLanguages - 1; i++ )
            {
                cout << formatReportLine( i, infoArray, names ) << endl;
            }
            cout << "\nThese are programming languages listed by date and \"quality rank\". " << endl;
            cout << "If you do not agree, consult XKCD.";
        }
    }
   
   return 0;
}
