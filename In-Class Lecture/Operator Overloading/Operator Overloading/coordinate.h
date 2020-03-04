/**
 * @file coordinate.h
 * @brief  This is a lecture program that illustrates operator overloading.  Coordinate class declarations
 *
 * @author Bilbo B. Baggins
 * @credits Gaddis Chapter 11
 * @assignment Lecture 6.1
 * @date 2/17/2020
 *
 */
#ifndef COORDINATE_H
#define COORDINATE_H

//4.1 ostream
#include <ostream>

class Coordinate
{
private:
    int x;
    int y;
    std::string* label;
public:
    //getters
    int getX()const { return x; }
    int getY()const { return y; }
    std::string getLabel() const { return *label; }
    std::string printCoordinate() const;
    //setters
    void setLabel(std::string label) { *(this->label) = label; }
    Coordinate(int x, int y, std::string label);
    ~Coordinate();
    //copy constructor
    Coordinate(const Coordinate& rhs);
    //**********Lecture 6.1 **************
    //1.1.  The declaration
    Coordinate& operator=(const Coordinate &rhs);
    //operator = override
    
    //2.1.  The declaration
    //operator ==
    bool operator==(const Coordinate& rhs);
    //3.1 the declaration
    Coordinate operator+(const Coordinate& rhs);
    //4.1 the declaration <<
    //insertion << override
    friend std::ostream& operator<<(std::ostream& out, Coordinate& coord);
    //4.4 the declaration >>
    friend std::istream& operator>>(std::istream& in, Coordinate& coord); //extraction
    
    
    //Assignment
    Coordinate operator-(const Coordinate& rhs);
};
#endif


