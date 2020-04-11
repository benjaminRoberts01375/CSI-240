/**
 * @file coordinate.cpp
 * @brief  This is a lecture program that illustrates operator overloading.  The Coordinate implementation file
 *
 * @author Bilbo B. Baggins
 * @credits Gaddis Chapter 11
 * @assignment Lecture 6.1
 * @date 2/17/2020
 *
 */
#include <iostream>
#include <sstream>
#include "coordinate.h"

std::string Coordinate::printCoordinate() const
{
    std::stringstream retVal;
    retVal << *label << "(" << x << ", " << y << ")";
    return retVal.str();
}

Coordinate::Coordinate(int x, int y, std::string label) : x{x}, y{y}
{
    this->label = new std::string(label);
    std::cout << "In THREE PARAMETER Constructor:" << *(this->label) << "(" << this << ")" << std::endl;
    }
    
    Coordinate::~Coordinate()
    {
    std::cout << "Destroying the Coordinate called: " << *label << "(" << this << ")" << std::endl;
    delete label;
    }
    
    Coordinate::Coordinate(const Coordinate& rhs)
    {
    std::cout << "In the COPY constructor!" <<  "(" << this << ")" << std::endl;
    this->x = rhs.x;
    this->y = rhs.y;
    this->label = new std::string(*(rhs.label));
    }
    //Lecture 6.1
    //1.2 The implementation =
    
    Coordinate& Coordinate::operator=(const Coordinate &rhs)
    {
    //check to see if we are doing something like a = a
    //if so, just return the left side of the assignment.
    if (this == &rhs)
    {
    std::cout << "Self assignment!" << std::endl;
    //this returns a ref to the object, need to dereference from pointer value.
    return *this;
    }
    std::cout << "In overloaded =" << std::endl;
    //need to deallocate label the left hand side.
    //or it will be a dangling pointer
    delete label;
    //this is similar to the copy constructor.
    this->x = rhs.x;
    this->y = rhs.y;
    this->label = new std::string(*(rhs.label));
    
    //return the new and improved lhs.
    return *this;
    }
    
    //2.2.  The implementation of == overload
    bool Coordinate::operator==(const Coordinate& rhs)
    {
    std::cout << "In the coordinate member function == overload" << std::endl;
    return (x == rhs.x && y == rhs.y);
    }
    //3.2.  The implementation of +
    Coordinate Coordinate::operator+(const Coordinate& rhs)
    {
    std::cout << "In the coordinate member function + overload" << std::endl;
    //returns a new object
    std::stringstream finalLabel;
    finalLabel << *(label) << *(rhs.label);
    
    Coordinate retVal(x + rhs.x, y + rhs.y, finalLabel.str());
    return retVal;
    }
    //4.2 <<
    //NOTE THIS IS NOT A CLASS METHOD, no leading Coordinate and could
    //in fact be implemented elsewhere.
    std::ostream& operator<<(std::ostream& out, Coordinate& coord)
    {
    out << *(coord.label) << " x:" << coord.x << " y:" << coord.y;
    return out;
    }
    //4.5 >>
    //sort of a hack, but if you were reading a file it would be far more useful.
    std::istream& operator>>(std::istream& in, Coordinate& coord)
    {
    int x, y;
    std::cout << "Enter x: ";
    in >> coord.x;
    std::cout << "Enter y: ";
    in >> coord.y;
    return in;
    }
    
    Coordinate Coordinate::operator-(const Coordinate& rhs){
    std::cout << "In the coordinate member function - overload" << std::endl;
    int xCord = 0;
    int yCord = 0;
    xCord = x - rhs.x;
    yCord = y - rhs.y;
    
    if (xCord < 0){
    xCord = 0;
    }
    if (yCord < 0){
    yCord = 0;
    }
    Coordinate retVal(xCord, yCord, *(label));
    return retVal;
    }
    /*
     Coordinate Coordinate::operator+(const Coordinate& rhs)
     {
     std::cout << "In the coordinate member function + overload" << std::endl;
     //returns a new object
     Coordinate retVal(x + rhs.x, y + rhs.y, *(label));
     return retVal;
     }
     */
