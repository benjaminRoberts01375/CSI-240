#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
    Shape(const std::string& name, const std::string&caption);
    virtual ~Shape(); //virtual dtor in the case that base classes allocate memory
    virtual void draw() const = 0; //Pure Virtual Function is shown by having an =0.  This makes the class abstract
    virtual double getArea() const = 0; //Pure Virtual Function
    
    virtual std::string toString() const; //Virtual  Function allows polymorphism via Base class ptr!
private:
    std::string name;  //identify the shape
    std::string caption; //just another member variable to use throughout the heirarchy.
    
};
#endif
