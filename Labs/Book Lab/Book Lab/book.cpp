#include "book.h"


Book::Book(){ //Default
    bName = "";
    bType = UNKNOWN;
    bPages = 0;
    bOunces = 0.0;
}

Book::Book(const string& name, Type type, int pages, float ounces){
    bName = name;
    bType = type;
    bPages = pages;
    bOunces = ounces;
}

string Book::formatReportLine(){
    stringstream singleLine;
    singleLine << "\"" << getName() << "\"" << " | Type: " << getTypeName() << "   Pages: " << getPages() << "   Weight (lbs): " << getWeightLbs();
    return singleLine.str();
}
