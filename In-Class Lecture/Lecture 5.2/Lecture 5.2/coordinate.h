#include <iostream>
#include <sstream>


#ifndef coordinate_h
#define coordinate_h

class Coordinate{
private:
    
    int x;
    int y;
    std::string* label;
    
public:
    
    //Constructors
    Coordinate();
    Coordinate(int x, int y, std::string label);
    
    //Copy Constructor
    Coordinate(const Coordinate& rhs); //rhs = Right Hand Side
    
    //Setters
    void setX(int x){ this->x = x; }
    void setY(int y){ this->y = y; }
    
    void setLabel(std::string label){ *(this->label) = label; }
    
    //Getters
    int getX() const { return x; };
    int getY() const { return y; };
    
    std::string getLabel() const { return *label; }
    
    //Destructor
    ~Coordinate();
    
    //Functions
    std::string printCoords();
    
};


#endif /* coordinate_h */
