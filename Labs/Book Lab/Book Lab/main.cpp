/**
 @File main.cpp
 @Brief Read file input, and call functions to interpret file input and format for user
 @author Ben Roberts
 @Credit Murat K. Gungor & Brian R. Hall
 @Assignment Lab 3
 @Date 1/25/2020
 */

#include <iostream>
#include <fstream>
#include <string>
#include "book.h"

using namespace std;

int main(){
	const string FILENAME("books.txt");
   
	ifstream input(FILENAME);
   
	if( input.good() ){
		while( !input.eof() ){
			string name;
			int type;
			int pages;
			float ounces;
			getline( input, name );
			input >> type >> pages >> ounces;
			input.ignore(INT_MAX, '\n');  //ignore the newline char at the end of the line
         
            Book myBook(name, static_cast<Type>(type), pages, ounces);
            
            cout << myBook.formatReportLine() << endl;
			
         
		}
	}
	else {
		cout << "File not found: " << FILENAME << endl;
	}
   
	//system("pause");
	return 0;
}
