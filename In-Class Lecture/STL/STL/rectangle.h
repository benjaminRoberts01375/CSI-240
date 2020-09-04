#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "shape.h"
class Rectangle : public Shape
{
public:
    Rectangle(const std::string name, const std::string caption, double side1 = 0.0, double side2 = 0.0);
    virtual ~Rectangle(); //now the virtual keyword is not required if it is in the base class, but best practice
    //also includes it in each derivation of the base class.
    virtual void draw() const override; //overide is a new keyword, it is not required but will cause a compiler error if you fail to create an implementation and is considered best practice.
    virtual double getArea() const override; //Need to implement the classes pure Virtual Function
    
    virtual std::string toString() const override; //Virtual  Function allows polymorphism via Base class ptr!
    
private:
    double side1;
    double side2;
};
#endif
