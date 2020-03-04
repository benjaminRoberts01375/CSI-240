#include "coordinate.h"

//Default Constructor
Coordinate::Coordinate(){
    x = 0;
    y = 0;
    *label = "";
}

//Custom Constructor
Coordinate::Coordinate(int x, int y, std::string label) : x{x}, y{y}{
    this->label = new std::string(label);
    std::cout << "In constructor" << std::endl;
}
    
//Copy Constructor
Coordinate::Coordinate(const Coordinate& rhs){
    this->x = rhs.x;
    this->y = rhs.y;
    this->label = new std::string(*(rhs.label));
}
    
//Destructor
Coordinate::~Coordinate(){
    std::cout << "Kaboomed: " << *label << std::endl;
    delete label;
}

std::string Coordinate::printCoords(){
    
    std::stringstream output;
    
    output << *label << ": (" << x << ", " << y << ")";
    
    return output.str();
    
}
