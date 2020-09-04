#include "shape.h"
#include <iostream>
Shape::Shape(const std::string& name, const std::string&caption): name{name}, caption{caption}
{
  std::cout << "In Shape()" << std::endl;
  
}
    
Shape::~Shape()
{
  std::cout << "In ~Shape()" << std::endl;
}
    
std::string Shape::toString() const
{
  return "In Shape::toString()";
}
